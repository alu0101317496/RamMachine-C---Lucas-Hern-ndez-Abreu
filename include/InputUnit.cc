#include "InputUnit.h"

InputUnit::InputUnit(std::string ifile) :
ifile_(ifile) 
{}

InputUnit::~InputUnit()
{
    
}

std::vector<std::string> InputUnit::GetInput(bool debug)
{
    std::ifstream file;
    file.open(ifile_);
    if(!file.is_open())
    {
        printf("Error opening %s\n", ifile_.c_str());
        
        throw "Error Opening The file";
    }
    std::vector<std::string> result;
    
    std::string auxs;
    while(std::getline(file, auxs))
    {
        if(auxs[0] == '#' || auxs[0]== '\0')
            continue;
        result.push_back(auxs);
    }
    
    if(debug)
        Show(result);
    file.close();
    return result;
}

void InputUnit::Show(std::vector<std::string> sv)
{
    std::string aux = "Input Unit Reports:\nContent of file read:\n";
    int size = sv.size();
    
    for(int i = 0; i < size; ++i)
    {
        aux += "Instruction " + std::to_string(i+1) + ": " + sv[i] + "\n";
    }
    std::cout << aux;
}
