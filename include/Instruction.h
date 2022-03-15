/* date = March 12th 2022 11:55 am */

#include "libraries.h"
#include "DataMemory.h"

#ifndef _INSTRUCTION_H
#define _INSTRUCTION_H



class Instruction
{
    public:
    Instruction(bool, std::string, std::string, std::string);
    ~Instruction();
    
    virtual void RunInstruction(DataMemory*, bool& halt_) = 0;
    void Visualizer();
    
    protected:
    bool istag_;
    std::string name_;
    std::string op_;
    std::string tag_;
};


#endif //_INSTRUCTION_H
