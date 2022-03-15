/* date = March 14th 2022 2:59 pm */

#include "../Instruction.h"

#ifndef _I_READ_H
#define _I_READ_H

class IRead : public Instruction
{
    public: 
    IRead(bool, std::string, std::string, std::string);
    ~IRead();
    void RunInstruction(DataMemory* data, bool& halt);
    
    private:
};

#endif //_I_READ_H
