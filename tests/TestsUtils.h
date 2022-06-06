#pragma once
#include <fstream>

#define ROOT_PATH

std::string readFile(std::string const &pathToFile);

std::istringstream fileToStringStream(std::string const &pathToFile);