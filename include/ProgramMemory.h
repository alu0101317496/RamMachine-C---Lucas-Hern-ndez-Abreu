/* date = March 12th 2022 0:02 pm */

#ifndef _PROGRAM_MEMORY_H
#define _PROGRAM_MEMORY_H



#include "Instructions/ILoad.h"
#include "Instructions/IStore.h"
#include "Instructions/IAdd.h"
#include "Instructions/ISub.h"
#include "Instructions/IMul.h"
#include "Instructions/IDiv.h"
#include "Instructions/IRead.h"
#include "Instructions/IWrite.h"
#include "Instructions/IJump.h"
#include "Instructions/IJzero.h"
#include "Instructions/IJgtz.h"
#include "Instructions/IHalt.h"



class ProgramMemory
{
    public:
    ProgramMemory();
    ~ProgramMemory();
    void BuildInstructions(std::vector<std::string>);
    void ShowInstructions(int);
    void RunNext(DataMemory*, int&, bool&, const int);
    private:
    std::vector<Instruction*> Instructions_;  
};

#endif //_PROGRAM_MEMORY_H
