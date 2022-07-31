#include <iostream>
#include <cmath>
using namespace std;

string TypeOf(int){
    return "int";
}
string TypeOf(const string&){
    return "string";
}

int main(){
    double x_double = 0.0;
    float x_float = 0.0;
    long double x_long_double = 0.0;

    cout << "cos(0)=" << cos(x_double) << endl;
    cout << "cos(0)=" << cos(x_float) << endl;
    cout << "cos(0)=" << cos(x_long_double) << endl;
    // 함수 쓸때 리턴 타입 따라 다른 함수를 사용하지 않아도 됨. 

    cout << TypeOf(1) << endl;
    cout << TypeOf("Hello") << endl;
    return 0;
}