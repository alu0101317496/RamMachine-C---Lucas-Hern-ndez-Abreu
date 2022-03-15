#include "IAdd.h"

IAdd::IAdd(bool istag,
           std::string name,
           std::string op = NULL,
           std::string tag = nullptr) : 
Instruction(istag, name, op, tag)
{}

IAdd::~IAdd()
{}

void IAdd::RunInstruction(DataMemory* data, bool& halt)
{
    
}