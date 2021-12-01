//
// Created by go on 01.12.21.
//

#include "Day1.h"
#include "util.h"

int Day1::part1() {
    auto strings = util::getInput(1, "prod");
    auto nums = util::toInts(strings);

    int counter = 0;
    int prev = INT32_MAX;
    for (const auto &item : nums) {
        if (item > prev) counter ++;
        prev = item;
    }
    return counter;

}

int Day1::part2() {
    auto strings = util::getInput(1, "prod");
    auto nums = util::toInts(strings);

    int counter = 0;
    int prevSum = INT32_MAX;
    for (int i = 0; i < nums.size() - 2; i ++) {
        int currSum = nums.at(i) + nums.at(i+1) + nums.at(i+2);
        if (currSum > prevSum) counter++;
        prevSum = currSum;
    }

    return counter;
}

