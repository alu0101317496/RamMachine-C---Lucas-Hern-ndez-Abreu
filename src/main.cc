/*
Descripción de la practica
El objetivo de la presente práctica consiste en ampliar el simulador de la máquina RAM ya implementado en la Práctica 2 - Simulador de la máquina RAM. Esta ampliación consiste en 2 pasos principales:

Implementar un modo debug en el simulador, que pueda ser utilizado en la llamada al simulador por línea de comandos de esta forma.
	C++: ./simulador ram_program.ram input_tape.in output_tape.out debug
	Java: java simulador ram_program.ram input_tape.in output_tape.out debug
Si debug == 0, el modo debug se encuentra deshabilitado y por lo tanto el simulador se ejecutará como en la práctica anterior.
Si debug == 1, se muestra por pantalla el número de instrucciones ejecutadas por la máquina al finalizar la ejecución.
Si debug == 2, además de mostrar el número de instrucciones ejecutadas por la máquina al finalizar la ejecución, se realiza una simulación del programa paso a paso, mostrando por consola en cada paso:
La instrucción ejecutada.
La memoria de datos.
La cinta de entrada y su posición actual.
La cinta de salida y su posición actual.

Ampliar los registros R para que permitan almacenar vectores de tamaño dinámico.
Esto implica que ahora el operando de direccionamiento directo puede verse como i[j], siendo equivalente a decir Ri[j]. Se permitirán 2 opciones a la hora de direccionar la posición del vector: inmediata (precedido de =) y directa. Por ejemplo, LOAD R1[=2] carga en R0 el contenido de la posición 2 del vector contenido por R1 (R0 = R1[2]), mientras que LOAD R1[2] carga en R0 el contenido de la posición indicada por R2 del vector (R0 = R1[R2]). 

Aprovechando la ampliación realizada, se debe implementar en la máquina RAM y comparar el número de ejecuciones para instancias de diferente tamaño 2 algoritmos de ordenación:


Inserción:
1 for j = 2 to n do
2    key = A[j]
3    i = j - 1
4    while i > 0 and A[i] > key
5       A[i + 1] = A[i]
6       i = i - 1
7    end
8    A[i + 1] = key
9 end

BubbleSort:
1  for i = 1 to n-1 do
2     for j = n downto i + 1 do
3        if A[j-1] > A[j] then begin
4           temp = A[j-1]
5           A[j-1] = A[j]
6           A[j] = temp
7        end
8     end
9  end

Los resultados de esta comparación deben reflejarse en un informe de una página.

Durante la defensa de la práctica se podrá solicitar algún tipo de modificación o prueba adicional, la cual afectará en diferente grado a la nota final.
Entrega de la práctica
La práctica debe entregarse en tiempo y forma acorde a lo indicado en la tarea del campus virtual.  Para poder considerar la práctica como aprobada, deben cumplirse 2 requisitos:

La práctica debe defenderse en su sesión correspondiente. Además, debe funcionar tal y como se especifica en el presente enunciado.
Se debe entregar la tarea del campus virtual incluyendo un fichero con extensión tar.gz con el código fuente del programa, así como con el informe que contenga la comparativa de los algoritmos.

La no realizacion de uno de estos 2 puntos conlleva la calificacion como suspenso de la practica.

*/

#include "../include/RamMachine.h"

void DefUse()
{
    printf("Use of the program, 3 args needed:\n1st arg: input file\n2nd arg: output file\n3rd arg: Estrategy\n    0: Debug = 0, executes RAM normally\n    1: Debug = 1, number of instructions shown\n    2: Debug = 2, showing all data: instruction, memory, input tape, output tape\n");
}

int main(int argc, char** argv) 
{
    const char* helpc = "-h";
    const char* help = "-help";
    if (argc == 2 && (argv[1] == helpc || argv[1] == help)) 
    {
        DefUse();
    }
    else if (argc == 4)
    {
        
        int Debug = atoi(argv[3]);
        if(Debug != 0 && Debug != 1 && Debug != 2)
        {
            DefUse();
            return 1;
        }
        RamMachine machine = RamMachine(argv[1], argv[2], Debug);
        machine.RunProgram();
        
    }
    else 
    {
        DefUse();
    }
    return 0;
}
