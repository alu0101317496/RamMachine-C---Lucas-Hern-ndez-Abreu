/* date = March 11th 2022 3:20 pm */


#include "ProgramMemory.h"
#include "InputUnit.h"
#include "OutputUnit.h"
#include "DataMemory.h"

#ifndef _ALU_H
#define _ALU_H

class Alu 
{
    public:
    Alu(std::string,
        std::string,
        int);
    ~Alu();
    
    void RunAlu();
    void Visualizer();

    private:
    
    InputUnit* iUnit_;
    OutputUnit* oUnit_;
    ProgramMemory* program_memory_;
    DataMemory* data_memory_;
    std::string finput_;
    std::string foutput_;
    int Debug;
    int pc_;
    int on_reg_;
    bool halt_;
};

#endif //_ALU_H
