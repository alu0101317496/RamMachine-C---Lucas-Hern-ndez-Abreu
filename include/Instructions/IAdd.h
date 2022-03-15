/* date = March 14th 2022 9:32 pm */

#include "../Instruction.h"

#ifndef _I_ADD_H
#define _I_ADD_H
class IAdd : public Instruction
{
    public:
    IAdd(bool, std::string, std::string, std::string);
    void RunInstruction(DataMemory* data, bool& halt);
    ~IAdd();
    private:
};
#endif //_I_ADD_H
