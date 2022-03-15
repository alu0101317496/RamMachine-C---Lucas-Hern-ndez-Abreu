/* date = March 12th 2022 8:21 pm */

#include "libraries.h"

#ifndef _INPUT_UNIT_H
#define _INPUT_UNIT_H


class InputUnit
{
    public:
    InputUnit(std::string);
    ~InputUnit();
    
    std::vector<std::string> GetInput(bool debug);
    void Show(std::vector<std::string>);
    
    private: 
    std::string ifile_;
};

#endif //_INPUT_UNIT_H
