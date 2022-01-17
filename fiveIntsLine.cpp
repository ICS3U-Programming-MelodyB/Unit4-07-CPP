// Copyright (c) Melody Berhane All rights reserved.
//
// Created by: Melody Berhane
// Created on: Jan, 17 2022
// This program prints numbers from 1000 to 2000.

#include <iostream>

main() {
    // this function is the the famous Fizz-Buzz problem

    int counter;

    for (counter = 1000; counter < 2001; counter++) {
        if (counter % 5 == 0) {
             std::cout << std::endl;
        }
        std::cout << counter << " ";
    }
}
