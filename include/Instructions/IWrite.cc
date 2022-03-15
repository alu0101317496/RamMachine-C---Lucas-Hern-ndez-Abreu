#include "IWrite.h"

IWrite::IWrite(bool istag,
               std::string name,
               std::string op = NULL,
               std::string tag = nullptr) :
Instruction(istag, name, op, tag)
{
    
}

IWrite::~IWrite()
{
    
}

void IWrite::RunInstruction(DataMemory* data, bool& halt)
{
    
}