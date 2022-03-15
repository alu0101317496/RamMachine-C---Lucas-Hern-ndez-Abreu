/* date = March 14th 2022 10:43 pm */

#include "../Instruction.h"

#ifndef _I_MUL_H
#define _I_MUL_H
class IMul : public Instruction
{
    public:
    IMul(bool, std::string, std::string, std::string);
    ~IMul();
    void RunInstruction(DataMemory* data, bool& halt);
    
    private:
};
#endif //_I_MUL_H
