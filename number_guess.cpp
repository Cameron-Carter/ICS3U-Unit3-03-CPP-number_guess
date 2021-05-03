// Copyright (c) Cameron Carter All rights reserved
//
// Created by: Cameron Carter
// Created on: May 2021
// This program lets the user guess a number from 1-10

#include <iostream>
#include <random>

int main() {
    // This function adds two numbers
    int guessedNumber;
    int randomNumber;

    // Input
    std::cout << "Guess a number from 1-10: ";
    std::cin >> guessedNumber;

    // Process and Output
    std::random_device rseed;
    std::mt19937 rgen(rseed());  // mersenne_twister
    std::uniform_int_distribution<int> idist(1, 10);
    randomNumber = idist(rgen);
    if (guessedNumber == randomNumber) {
        std::cout << "\nCorrect! The number was " << randomNumber << ".";
    } else {
        std::cout << "\nIncorrect! The number was " << randomNumber << ".";
    }
    std::cout << "\nDone." << std::endl;
}
