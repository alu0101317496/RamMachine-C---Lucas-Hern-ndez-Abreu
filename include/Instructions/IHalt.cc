#include "IHalt.h"

IHalt::IHalt(bool istag, 
             std::string name, 
             std::string op = NULL, 
             std::string tag = nullptr) : 
Instruction(istag, name, op, tag)
{}

IHalt::~IHalt()
{
    
}

void IHalt::RunInstruction(DataMemory* data, bool& halt)
{
    halt = true;
}