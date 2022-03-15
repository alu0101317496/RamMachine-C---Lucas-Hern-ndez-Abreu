/* date = March 14th 2022 10:45 pm */

#include "../Instruction.h"

#ifndef _I_DIV_H
#define _I_DIV_H
class IDiv : public Instruction
{
    public:
    IDiv(bool, std::string, std::string, std::string);
    void RunInstruction(DataMemory* data, bool& halt);
    ~IDiv();
    private:
};
#endif //_I_DIV_H
