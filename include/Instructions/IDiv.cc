#include "IDiv.h"

IDiv::IDiv(bool istag, 
           std::string name, 
           std::string op = NULL, 
           std::string tag = nullptr) :
Instruction(istag, name, op, tag)
{
    
}

void IDiv::RunInstruction(DataMemory* data, bool& halt)
{
    
}