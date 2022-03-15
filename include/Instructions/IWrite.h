/* date = March 14th 2022 9:39 pm */

#include "../Instruction.h"

#ifndef _I_WRITE_H
#define _I_WRITE_H
class IWrite : public Instruction
{
    public:
    IWrite(bool, std::string, std::string, std::string);
    ~IWrite();
    void RunInstruction(DataMemory* data, bool& halt);
    private:
};
#endif //_I_WRITE_H
