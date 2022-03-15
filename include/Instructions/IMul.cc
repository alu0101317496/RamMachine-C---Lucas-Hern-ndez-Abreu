#include "IMul.h"

IMul::IMul(bool istag, 
           std::string name, 
           std::string op = NULL, 
           std::string tag = nullptr) :
Instruction(istag, name, op, tag)
{
    
}

IMul::~IMul()
{
    
}

void IMul::RunInstruction(DataMemory* data, bool& halt)
{
    
}