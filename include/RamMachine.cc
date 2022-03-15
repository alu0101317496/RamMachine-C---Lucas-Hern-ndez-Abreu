#include "RamMachine.h"

RamMachine::RamMachine(std::string infile,
                       std::string outfile,
                       int debug) :
finput(infile), 
foutput(outfile),
Debug(debug)
{
    ALU = new Alu(finput, foutput, Debug);
}

RamMachine::~RamMachine() 
{
    delete ALU;
}

void RamMachine::RunProgram()
{
    ALU->RunAlu();
}

void RamMachine::Visualizer()
{
    
}

