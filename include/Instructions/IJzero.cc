#include "IJzero.h"

IJzero::IJzero(bool istag, 
               std::string name, 
               std::string op = NULL, 
               std::string tag = nullptr) : 
Instruction(istag, name, op, tag)
{
    
}

IJzero::~IJzero()
{
    
}

void IJzero::RunInstruction(DataMemory* data, bool& halt)
{
    
}