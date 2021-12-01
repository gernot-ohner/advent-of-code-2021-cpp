//
// Created by go on 01.12.21.
//

#ifndef ADVENT_OF_CODE_2021_UTIL_H
#define ADVENT_OF_CODE_2021_UTIL_H


#include <string>
#include <vector>
#include <fstream>

class util {
public:
    static std::vector<std::string> getInput(int day, const std::string& testOrProd);
    static std::vector<int> toInts(const std::vector<std::string>& strings);
};


#endif //ADVENT_OF_CODE_2021_UTIL_H
