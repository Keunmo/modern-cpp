#include <iostream>
#include <string>
using namespace std;

int main(){
    // const char source[] = "Copy this!";
    // char dest[5];
    // cout << source << endl;

    // strcpy(dest, source);
    // cout << dest << endl;

    // cout << source << endl;

    const string source{"Copy this!"};
    string dest = source;

    cout << source << endl;
    cout << dest << endl;
    return 0;
}