// Copyright (c) 2020 Marlon Poddalgoda, All rights reserved
//
// Created by Marlon Poddalgoda
// Created on January 2021
// This program finds the smallest number of 10 random numbers

#include <iostream>
#include <iomanip>
#include <random>
#include <array>


template<size_t N>
int minValue(std::array<int, N> randomList) {
    // This program finds the smallest number

    int minNum = randomList[0];

    // process
    for (int loop_counter : randomList) {
        if (minNum <= loop_counter) {
            continue;
        } else if (minNum > loop_counter) {
            minNum = loop_counter;
        }
    }

    return minNum;
}


int main() {
    // This program prints 10 random integers and output
    std::cout << "This program finds the lowest value of 10 random numbers."
              << std::endl;
    std::cout << "" << std::endl;

    // variables
    std::array<int, 10> randomList;
    int randomNumber;
    int smallestNum;

    std::cout << "Here are 10 random numbers:" << std::endl;

    // process
    for (int loop_counter = 0; loop_counter < 10; loop_counter++) {
        // random number
        std::random_device rseed;
        std::mt19937 rgen(rseed());
        std::uniform_int_distribution<int> idist(1, 100);
        randomNumber = idist(rgen);

        randomList[loop_counter] = randomNumber;

        std::cout << randomNumber << std::endl;
    }

    smallestNum = minValue(randomList);

    std::cout << "" << std::endl;
    std::cout << "The smallest number is: " << smallestNum
              << std::endl;
}
