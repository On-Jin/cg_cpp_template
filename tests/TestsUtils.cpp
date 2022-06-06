#include "TestsUtils.h"
#include <filesystem>
#include <iostream>

std::string readFile(std::string const &pathToFile) {
    std::string completPathToFile = std::string(ROOT_PATH) + "/tests/" + pathToFile;
    std::cout << completPathToFile << std::endl;
    if (!std::filesystem::exists(completPathToFile)) {
        throw std::invalid_argument("File does not exist : " + completPathToFile);
    }
    std::ifstream t(completPathToFile);
    std::string str;

#ifdef unix
    std::string line;
    while (std::getline(t, line)) {
        str += line.erase(line.size() - 1, line.size()) + "\n";
    }
    return str;
#else
    t.seekg(0, std::ios::end);
    str.reserve(t.tellg());
    t.seekg(0, std::ios::beg);

    str.assign((std::istreambuf_iterator<char>(t)),
               std::istreambuf_iterator<char>());

    return str;
#endif
}

std::istringstream fileToStringStream(std::string const &pathToFile) {
    std::istringstream iss(readFile(pathToFile));
    return iss;
}