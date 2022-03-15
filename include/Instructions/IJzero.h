/* date = March 14th 2022 10:52 pm */

#include "../Instruction.h"

#ifndef _I_JZERO_H
#define _I_JZERO_H

class IJzero : public Instruction
{
    public:
    IJzero(bool, std::string, std::string, std::string);
    ~IJzero();
    void RunInstruction(DataMemory* data, bool& halt);
    
    private:
};
#endif //_I_JZERO_H
