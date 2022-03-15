#include "IRead.h"

IRead::IRead(bool istag, 
             std::string name, 
             std::string op = NULL, 
             std::string tag = nullptr) : 
Instruction(istag, name, op, tag)
{
}

IRead::~IRead()
{
    
}

void IRead::RunInstruction(DataMemory* data, bool& halt)
{
    
}
