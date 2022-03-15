#include "ISub.h"

ISub::ISub(bool istag, 
           std::string name, 
           std::string op = NULL, 
           std::string tag = nullptr) :
Instruction(istag, name, op, tag)
{
    
}

ISub::~ISub()
{}

void ISub::RunInstruction(DataMemory* data, bool& halt)
{
    
}