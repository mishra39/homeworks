#include <iostream>
#include <random>
#include <bits/stdc++.h>

int main(int agrc, char** argv)
{
    std::cout << "Welcome to the GUESSING GAME!" << 
    std::endl << "I will generate a number and you will guess it!" << std::endl;

    int num_small, num_large;
    std::cout << "Please provide the smallest number: " << std::endl; 
    std::cin >> num_small;
    std::cout << "Please provide the largest number: " << std::endl;
    std::cin >> num_large;

    // generate random number
    std::random_device rand_device;
    std::mt19937 rand_engine(rand_device());
    std::uniform_int_distribution<int> uniform_dist(num_small, num_large);
    int rand_num = uniform_dist(rand_engine);
    std::cout << "I've generated a number. Try to guess it!" << std::endl;

    int guess = INT_MAX;

    for (int i = 0; guess != rand_num; i++)
    {
        std::cout << "Please provide the next guess: ";
        std::cin >> guess;

        if (guess == rand_num)
        {
            printf("You've done it! You guessed the number %d in %d guesses!\n", rand_num, i);
            break;
        }

        else if (guess < rand_num)
        {
            std::cout << "Your number is too small. Try again!" << std::endl;
        }
        else
        {
            std::cout << "Your number is too big. Try again!" << std::endl;
        }
    }

    return 0;
}