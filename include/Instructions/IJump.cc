#include "IJump.h"

IJump::IJump(bool istag, 
             std::string name, 
             std::string op = NULL, 
             std::string tag = nullptr) :
Instruction(istag, name, op, tag)
{
    
}

void IJump::RunInstruction(DataMemory* data, bool& halt)
{
    
}