#include <iostream>
#include <random>
#include <cstdlib>
using namespace std;

int main(){
    random_device rnd;
    uniform_int_distribution<int> dist(0, 99);
    int ans = dist(rnd);
    int guess = 100;
    while (true){
        cout << "Guess the number(0~99): " << endl;
        cin >> guess;
        if (cin.good()){
            cin.clear();
            cin.ignore(1000, '\n');
            if (guess > 99 || guess < 0){
                cerr << "[WARNING] : Number must be between 0 and 99--1\n";
                continue;
            }
            else if (guess > ans)
                cout << "Its number is smaller.\n";
            else if (guess < ans)
                cout << "Its number is larger.\n";
            else if (guess == ans){
                cout <<  "You have won!\n";
                return EXIT_SUCCESS;
            }
        }
        else if (cin.fail()){
            cin.clear();
            cin.ignore(1000, '\n');
            cerr << "[WARNING] : Number must be between 0 and 99--2\n";
        }
        else {
            cin.clear();
            cin.ignore(1000, '\n');
            cerr << "Error encountered, exiting...\n";
            return EXIT_FAILURE;
        }
    }
    return 0;
}