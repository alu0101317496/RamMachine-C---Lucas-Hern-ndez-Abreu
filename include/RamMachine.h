/* date = March 12th 2022 11:36 am */

#ifndef _RAM_MACHINE_H
#define _RAM_MACHINE_H

#include "Alu.h"

class RamMachine
{
    public:
    RamMachine(std::string, std::string, int);
    ~RamMachine();
    void RunProgram();
    void Visualizer();
    private:
    
    Alu* ALU;
    std::string finput;
    std::string foutput;
    int Debug;
};

#endif //_RAM_MACHINE_H
