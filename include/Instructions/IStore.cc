#include "IStore.h"


IStore::IStore(bool istag, 
               std::string name, 
               std::string op = NULL, 
               std::string tag = nullptr) :
Instruction(istag, name, op, tag)
{}

IStore::~IStore()
{
    
}

void IStore::RunInstruction(DataMemory* data, bool& halt)
{
    
}
