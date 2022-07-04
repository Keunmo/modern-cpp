#include <iostream>
#include <map>
using namespace std;

int main(void){
    // for (int i = 0; i < 10; i++) {
    //     std::cout << i << std::endl;
    // }

    // int a[] = {1,2,3,4,5};
    // for (const auto& val : a) {                         // compile option: -std=c++11
    //     std::cout << val << std::endl;
    // }

    // std::map<char, int> my_dict;
    // my_dict['a'] = 27;
    // my_dict['b'] = 3;
    // std::map<char, int> my_dict = {{'a', 27}, {'b', 3}};   // compile option: -std=c++17
    // std::map<char, int> my_dict{{'a', 27}, {'b', 3}};   // compile option: -std=c++17
    // for (const auto& [key, val] : my_dict){             // compile option: -std=c++17
    //     std::cout << key << " has value " << val << std::endl;
    // }

    // while (true){
    //     int i = 9;
    //     if (i % 2 == 0){
    //         std::cerr << i << std::endl;
    //     }
    //     else {
    //         break;
    //     }
    // }

    // const float var = 84.78;
    // const bool cmp_result = (84.78 == var);
    // std::cout << "84.78 equal to " << var << " ???\n"
    //           << std::boolalpha << cmp_result << '\n';
    
    int num = 42;
    int& ref = num;
    const int& kRef = num;
    ref = 0;
    cout << ref << " " << num << " " << kRef << endl; // 0 0 0
    num = 42;
    cout << ref << " " << num << " " << kRef << endl; // 42 42 42
    return 0;
}