#include "IJgtz.h"

IJgtz::IJgtz(bool istag, 
             std::string name, 
             std::string op = NULL, 
             std::string tag = nullptr) : 
Instruction(istag, name, op, tag)
{
    
}

void IJgtz::RunInstruction(DataMemory* data, bool& halt)
{
    
}