// Copyright (c) 2020 Sean McLeod All rights reserved

// Created by Sean McLeod
// Created on December 2020
// This program can read an integer and display its sign

#include <iostream>


int main()  {
    // this function can tell the user what the charge of the integer is

    int number;

    // input
    std::cout << "Enter any integer: " << std::endl;
    std::cin >> number;
    std::cout << "" << std::endl;

    // process and output
    if (number > 0) {
        std::cout << "The charge is (+)" << std::endl;
    } else if (number <0) {
        std::cout << "The charge is (-)" << std::endl;
    } else {
        std::cout << "The number is 0" << std::endl;
    }
}
