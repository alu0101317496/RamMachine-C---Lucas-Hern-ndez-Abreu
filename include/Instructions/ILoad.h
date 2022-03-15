/* date = March 12th 2022 0:19 pm */

#include "../Instruction.h"

#ifndef _I_LOAD_H
#define _I_LOAD_H

class ILoad : public Instruction
{
    public:
    ILoad(bool, std::string, std::string, std::string);
    ~ILoad();
    
    void RunInstruction(DataMemory* data, bool& halt);
    
    private:
};

#endif //_I_LOAD_H
