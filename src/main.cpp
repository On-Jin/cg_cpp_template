#pragma GCC optimize("O3", "unroll-loops", "omit-frame-pointer", "inline")

#include <cstdlib>
#include <iostream>
#include "MainHandler.h"

int main() {
    srand(5);

    MainHandler mainHandler = MainHandler();
    mainHandler.Init(std::cin);

    mainHandler.Loop(std::cin);
}