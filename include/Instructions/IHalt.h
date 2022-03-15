/* date = March 14th 2022 10:57 pm */

#include "../Instruction.h"

#ifndef _I_HALT_H
#define _I_HALT_H
class IHalt : public Instruction
{
    public:
    IHalt(bool, std::string, std::string, std::string);
    ~IHalt();
    void RunInstruction(DataMemory*, bool&);
    private:
};
#endif //_I_HALT_H
