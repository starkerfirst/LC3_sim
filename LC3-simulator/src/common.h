#pragma once

#include <iostream>
#include <fstream>
#include <cstdio>

#include <array>
#include <vector>
#include <cmath>
#include <climits>
#include <cstdlib>
#include <string>
#include <cstring>
#include <algorithm>

// Boost library
#include <boost/program_options.hpp>

// Application global variables
extern bool gIsSingleStepMode;
extern bool gIsDetailedMode;
extern std::string gInputFileName;
extern std::string gRegisterStatusFileName;
extern std::string gOutputFileName;
extern int gBeginningAddress;