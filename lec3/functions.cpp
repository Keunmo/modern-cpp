#include <iostream>
#include <tuple>
using namespace std;

auto Foo(){                           // -std=c++17
    return make_tuple("Super Variable", 5);
}

int main(){
    // auto [name, value] = Foo();       // -std=c++17
    auto [name, value] = Foo();          // -std=c++17
    cout << name << " has value : " << value << endl;
    return 0;
}


// Never return reference to locally variables!!!
// int& MultiplyBy10(int num){
//     int retval = 0;
//     retval = 10 * num;
//     cout << "retval is " << retval << endl; // if add this line, working!! why????
//     return retval;
// }
// After cout, the compiler assumes 'reval' will be usful later and holds the correct referens to memory... It will work until somthing els uses this memory location...

// int main(){
//     int out = MultiplyBy10(10);
//     cout << "out is " << out << endl;
//     return 0;
// }

// string SayHello(const string& to_whom = "world"){
//     return "Hello " + to_whom + "!";
// }

// int main(){
//     cout << SayHello() << endl;
//     cout << SayHello("Students") << endl;
//     return 0;
// }


