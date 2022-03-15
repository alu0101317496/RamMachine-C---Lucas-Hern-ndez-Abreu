#include "ILoad.h"

ILoad::ILoad(bool istag, 
             std::string name, 
             std::string op = NULL, 
             std::string tag = nullptr) :
Instruction(istag, name, op, tag)
{}

ILoad::~ILoad()
{
    
}

void ILoad::RunInstruction(DataMemory* data, bool& halt)
{
    
}