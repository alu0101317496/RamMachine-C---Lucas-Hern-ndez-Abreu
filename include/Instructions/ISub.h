/* date = March 14th 2022 10:37 pm */

#include "../Instruction.h"

#ifndef _I_SUB_H
#define _I_SUB_H
class ISub : public Instruction
{
    public:
    ISub(bool, std::string, std::string, std::string);
    ~ISub();
    void RunInstruction(DataMemory* data, bool& halt);
    private:
};
#endif //_I_SUB_H
