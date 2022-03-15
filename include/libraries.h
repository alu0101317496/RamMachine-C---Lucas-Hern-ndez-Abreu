/* date = March 12th 2022 11:39 am */

#pragma once

#include <iostream>
#include <string>
#include <vector>
#include <atomic>
#include <stdint.h>
#include <sstream>
#include <fstream>
#include <algorithm>


#define internal         static
#define local_persist    static
#define global_variable  static
#define ASSIGN '=' // Credits to Juan Guillermo Zafra Fernadez: 
#define INDIRECT '*'


typedef uint8_t uint8;
typedef uint16_t uint16;
typedef uint32_t uint32;
typedef uint64_t uint64;

typedef int8_t int8;
typedef int16_t int16;
typedef int32_t int32;
typedef int64_t int64;