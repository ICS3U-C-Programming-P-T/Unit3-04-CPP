// copyright 2025 Patrick
// Created on : 10/22/2025
// This program ask user for a integer saying if its positive negative or zero
#include <iostream>

int main() {
    // this will hold the user's number
    int userInteger;

    // ask user for a number
    std::cout << "Give me a Number: ";
    std::cin >> userInteger;

    // Checks if number is positive
    if (userInteger > 0) {
        std::cout << "This number is positive" << std::endl;

    // Checks if number is negative
    } else if (userInteger < 0) {
        std::cout << "This number is negative." << std::endl;

    // Checks if number is zero
    } else {
        std::cout << "This is a zero." << std::endl;
    }

    std::cout << "\nDone." << std::endl;
}
