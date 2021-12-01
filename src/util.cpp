//
// Created by go on 01.12.21.
//

#include <sstream>
#include "util.h"


std::vector<std::string> util::getInput(int day, const std::string& testOrProd) {
    std::stringstream ss {};
    ss << "../inputs/day" << day << "/" << testOrProd << ".txt";
    std::ifstream input(ss.str());
    std::string line;
    std::vector<std::string> lines {};

    while (input >> line)
        lines.push_back(line);
    return lines;
}

std::vector<int> util::toInts(const std::vector<std::string>& strings) {
    std::vector<int> nums(strings.size());
    std::transform(strings.begin(), strings.end(), nums.begin(), [] (const std::string& s) { return std::stoi(s); });
    return nums;
}
