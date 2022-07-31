#include <iostream>

// function call is expensive, so we can use inline to make it faster

inline int fac(int n){
    if (n < 2) {
        return  2;
    }
    return n * fac(n-1);
}

int main(){
    std::cout << fac(10) << std::endl;
    return 0;
}