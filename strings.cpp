#include <iostream>
#include <string>
using namespace std;

int main(){
    const string source{"Copy this!"};
    string dest = source;

    cout << source << endl;
    cout << dest << endl;
    return 0;
}