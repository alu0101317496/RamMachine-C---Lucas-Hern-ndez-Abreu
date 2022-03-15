#include "Instruction.h"

Instruction::Instruction(bool istag, 
                         std::string name, 
                         std::string op = NULL, 
                         std::string tag = "none") :
istag_(istag),
name_(name),
op_(op),
tag_(tag)
{}

Instruction::~Instruction()
{}

void Instruction::Visualizer()
{
    std::cout << "Tag: " << ((istag_)? "true " : "false") << "    Name: " << name_ << "    Operand: " << op_ << "    Tag to jump: " << ((tag_.empty())? "null" : tag_) << "\n";
}
