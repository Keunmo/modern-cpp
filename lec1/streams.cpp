#include <iostream>
#include <iomanip>
#include <sstream>
using namespace std;

int main(){
    // int some_num;
    // std::cout << "input any num" << std::endl;
    // std::cin >> some_num;
    // std::cout << "num = " << some_num << std::endl;
    // std::cerr << "boring err msg" << std::endl;

    stringstream filename{"00205.txt"}; // -std=c++11

    int num = 0;
    string ext;

    filename >> num >> ext;

    cout << "Number    is: " << num << endl; // 205
    cout << "Extension is: " << ext << endl; // .txt
    return 0;
}