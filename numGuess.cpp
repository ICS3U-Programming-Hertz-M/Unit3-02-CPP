// Copyright (c) 2022 Hertz All rights reserved.
//
// Created by: hertz
// Created on: 28 mar 2022
// this function compares the guessed number to the true number

#include <iostream>

int main() {
    // this shows the correct number
    const int TRUE_NUMBER = 6;
    int numberGuessed;

    // This ask the user to enter any number between 0 and 9
    std::cout << "Enter the number between 0 to 9: ";
    std::cin >> numberGuessed;
    std::cout << "" << std::endl;

    // this function compares the guessed number to the true number
    if (numberGuessed == TRUE_NUMBER) {
      std::cout << "your guess is correct!";
  } else {
       std::cout << "your guess is incorrect";
    }
}
