/* date = March 14th 2022 10:46 pm */

#include "../Instruction.h"

#ifndef _I_JUMP_H
#define _I_JUMP_H
class IJump : public Instruction
{
    public:
    IJump(bool, std::string, std::string, std::string);
    ~IJump();
    
    void RunInstruction(DataMemory* data, bool& halt);
    
    private:
};
#endif //_I_JUMP_H
