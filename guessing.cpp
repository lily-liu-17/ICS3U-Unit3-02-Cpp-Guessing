// Copyright Lily Liu All rights reserved.
//
// Created by: Lily Liu
// Created on: Sept 2021
// This lets user guess a number
// Program will say right or wrong

#include <iostream>
#include <iomanip>

int main() {
    // This lets user guess a number
    const int ANSWER = 5;
    int guessNumber;

    // input
    std::cout << "Enter a number between 1-9 : ";
    std::cin >> guessNumber;

    // process
    if (guessNumber == ANSWER) {
        // output
        std::cout << "You guessed correctly!";
    }
    if (guessNumber != ANSWER) {
        // output
        std::cout << "You guessed wrong!";
    }

    // output
    std::cout << "" << std::endl;
    std::cout << "" << std::endl;
    std::cout << "Done." << std::endl;
}
