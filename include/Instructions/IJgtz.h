/* date = March 14th 2022 10:54 pm */

#include "../Instruction.h"

#ifndef _I_JGTZ_H
#define _I_JGTZ_H
class IJgtz : public Instruction
{
    public:
    IJgtz(bool, std::string, std::string, std::string);
    ~IJgtz();
    void RunInstruction(DataMemory* data, bool& halt);
    
    private:
};
#endif //_I_JGTZ_H
