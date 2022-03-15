#include "Alu.h"

Alu::Alu(std::string inputfile, 
         std::string outputfile,
         int debug) :
finput_(inputfile),
foutput_(outputfile),
Debug(debug),
pc_(0),
on_reg_(0),
halt_(false)
{
    iUnit_ = new InputUnit(finput_);
    oUnit_ = new OutputUnit(foutput_);
    program_memory_ = new ProgramMemory();
    data_memory_ = new DataMemory();
}

Alu::~Alu()
{
    delete iUnit_;
    delete oUnit_;
    delete program_memory_;
    delete data_memory_;
}

void Alu::RunAlu()
{
    
    if(Debug == 2)
    {
        program_memory_->BuildInstructions(iUnit_->GetInput(true));
    }
    else   
    {
        program_memory_->BuildInstructions(iUnit_->GetInput(false));
    }
    while(!halt_)
    {
        program_memory_->RunNext(data_memory_, pc_, halt_, Debug);
    }
}


void Alu::Visualizer()
{
    program_memory_->ShowInstructions(pc_);
}
