#include "ProgramMemory.h"

ProgramMemory::ProgramMemory()
{}

ProgramMemory::~ProgramMemory()
{
    for(int i = 0; i < Instructions_.size(); ++i)
    {
        delete Instructions_[i];
    }
}

void ProgramMemory::ShowInstructions(int pc)
{
    Instructions_[pc]->Visualizer();
}

/**
* This function takes a vector and builds the instruction vector on the memory
* @param {std::vector<std::string>} sv 
*/
void ProgramMemory::BuildInstructions(std::vector<std::string> sv)
{
    Instruction* instruction_pusher;
    bool tagon = false;
    std::string tagname = "none";
    int size = sv.size();
    std::string auxs;
    std::vector<std::string> separated_instructions;
    for(int i = 0; i < size; ++i)
    {
        auxs = sv[i];
        std::istringstream iss(auxs);
        while (!iss.eof())
        {
            iss >> auxs;
            separated_instructions.push_back(auxs);
        }
        
        if (separated_instructions.size() == 3)
        {
            tagon = true;
            tagname = separated_instructions[0];
            separated_instructions.erase(separated_instructions.begin());
        }
        
        if (separated_instructions[0] == "READ" 
            || separated_instructions[0] == "read")
        {
            instruction_pusher = new IRead(tagon, "READ", separated_instructions[1], tagname);
        }
        else if (separated_instructions[0] == "LOAD" 
                 || separated_instructions[0] == "load")
        {
            instruction_pusher = new ILoad(tagon, "LOAD", separated_instructions[1], tagname);
        }
        else if (separated_instructions[0] == "WRITE"
                 || separated_instructions[0] == "write")
        {
            instruction_pusher = new IWrite(tagon, "WRITE", separated_instructions[1], tagname);
        }
        else if (separated_instructions[0] == "STORE"
                 || separated_instructions[0] == "store")
        {
            instruction_pusher = new IStore(tagon, "STORE", separated_instructions[1], tagname);
        }
        else if (separated_instructions[0] == "ADD"
                 || separated_instructions[0] == "add")
        {
            instruction_pusher = new IAdd(tagon, "ADD", separated_instructions[1], tagname);
        }
        else if (separated_instructions[0] == "SUB"
                 || separated_instructions[0] == "sub")
        {
            instruction_pusher = new ISub(tagon, "SUB", separated_instructions[1], tagname);
        }
        else if (separated_instructions[0] == "MUL"
                 || separated_instructions[0] == "mul")
        {
            instruction_pusher = new IMul(tagon, "MUL", separated_instructions[1], tagname);
        }
        else if (separated_instructions[0] == "DIV"
                 || separated_instructions[0] == "div")
        {
            instruction_pusher = new IDiv(tagon, "DIV", separated_instructions[1], tagname);
        }
        else if (separated_instructions[0] == "JUMP"
                 || separated_instructions[0] == "jump")
        {
            instruction_pusher = new IJump(tagon, "JUMP", separated_instructions[1], tagname);
        }
        else if (separated_instructions[0] == "JZERO"
                 || separated_instructions[0] == "jzero")
        {
            instruction_pusher = new IJzero(tagon, "JZERO", separated_instructions[1], tagname);
        }
        else if (separated_instructions[0] == "JGTZ"
                 || separated_instructions[0] == "jgtz")
        {
            instruction_pusher = new IJgtz(tagon, "JGTZ", separated_instructions[1], tagname);
        }
        else if (separated_instructions[1] == "HALT"
                 || separated_instructions[1] == "halt")
        {
            tagname = separated_instructions[0];
            instruction_pusher = new IHalt(true, "HALT", separated_instructions[1], tagname);
        }
        else
        {
            throw "ERROR READING INSTRUCTIONS: NOT RECOGNIZABLE";
        }
        Instructions_.push_back(instruction_pusher);
        
        
        tagon = false;
        instruction_pusher = nullptr;
        tagname.clear();
        separated_instructions.clear();
    }
}

void ProgramMemory::RunNext(DataMemory* data, int& pc, bool& halt, const int Debug)
{
    if(Debug == 2)
    {
        Instructions_[pc]->Visualizer();
    }
    Instructions_[pc]->RunInstruction(data, halt);
    ++pc;
}