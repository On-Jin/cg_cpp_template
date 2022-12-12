#pragma once

#include <iostream>
#include <vector>
#include <algorithm>
#include <map>
#include <set>
#include <optional>
#include <cstdio>
#include <cstdlib>
#include <ctime>
#include <sstream>
#include <exception>
#include <chrono>
#include <climits>
#include <cfloat>

using namespace std;

class MainHandler {
public:
    int turn = 0;

private:

public:
    void Init(istream &is) {
    }

    void Loop(istream &is, bool isTest = false) {
        bool infinite = !isTest;
        turn = 0;

        while (infinite) {
            turn++;
        }
    }
};
