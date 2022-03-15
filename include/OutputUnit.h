/* date = March 13th 2022 3:04 pm */

#include "libraries.h"

#ifndef _OUTPUT_UNIT_H
#define _OUTPUT_UNIT_H

class OutputUnit
{
    public:
    OutputUnit(std::string);
    ~OutputUnit();
    
    private:
    std::string ofile_;
};

#endif //_OUTPUT_UNIT_H
