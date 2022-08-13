#include <iostream>
#include <string>
#include <random>
// using namespace std;

int main(){
    std::random_device rd; // obtain a random number from hardware
    std::mt19937 gen(rd()); // Standard mersenne_twister_engine seeded with rd()
    std::uniform_int_distribution<int> dist(0, 99); // define the range

    int random_number = dist(gen);
    int guess = 0;
    
    std::cout << "Guess a number between 0 and 99: ";
    
    while (1) {
        std::cin >> guess;
        if (std::cin.fail()) {
            std::cout << "Error encountered, exiting..." << std::endl;
            return 1;
        }
        if (guess < 0 || guess > 99) {
            std::cerr << "[WARNING] : Number must be between 0 and 99" << std::endl;
        }
        else if (guess == random_number) {
            std::cout << "You guessed it!" << std::endl;
            return 0;
        }
        else if (guess > random_number) {
            std::cout << "Too high, try again: ";
        }
        else if (guess < random_number) {
            std::cout << "Too low, try again: ";
        }
        else{
            std::cout << "Error encountered, exiting..." << std::endl;
            return 1;
        }
    }
}