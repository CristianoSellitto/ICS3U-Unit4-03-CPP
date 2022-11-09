// Copyright Cristiano 2022
//
// Created by Cristiano Sellitto
// Created in October 2022
// A program that finds the square roots of integers

#include <iostream>
#include <string>

float floatingPointNumber;
int integer;
int answer;

int main() {
    // Finds the square roots of integers

    std::string number;
    std::cout << "Enter a positive integer to square root: ";
    std::cin >> number;
    std::cout << std::endl;
    try {
        floatingPointNumber = std::stof(number);
        integer = std::stoi(number);
        if (integer > 0 && integer == floatingPointNumber) {
            for (int counter = 0; counter < integer + 1; counter++) {
                answer = counter * counter;
                std::cout << counter << "² = " << answer;
                std::cout << std::endl;
            }
        } else if (integer == 0 && integer == floatingPointNumber) {
            std::cout << "0² = 0";
            std::cout << std::endl;
        } else {
            std::cout << integer << " is an incompatible integer.";
            std::cout << std::endl;
        }
    } catch (std::invalid_argument) {
        std::cout << "Error: " << number << " is not an integer.";
        std::cout << std::endl;
    }

    std::cout << std::endl;
    std::cout << "Done." << std::endl;
}
