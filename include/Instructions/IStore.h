/* date = March 14th 2022 9:07 pm */

#include "../Instruction.h"
#ifndef _I_STORE_H
#define _I_STORE_H
class IStore : public Instruction
{
    public:
    IStore(bool, std::string, std::string, std::string);
    ~IStore();
    void RunInstruction(DataMemory* data, bool& halt);
    private:
};
#endif //_I_STORE_H
