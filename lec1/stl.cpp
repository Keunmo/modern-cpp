#include <iostream>
#include <array>
#include <vector>
#include <map>
#include <unordered_map>

using std::cout;
using std::endl;

int main(int argc, char const *argv[]){
    // std::array
    std::array<float, 3> data{10.0f, 100.0f, 1000.0f};
    for (const auto& elem : data){
        cout << elem << endl;
    }
    cout << std::boolalpha; // bool의 0,1값을 false, true로 출력해줌
    cout << "Array empty: " << data.empty() << endl;
    cout << "Array size : " << data.size() << endl;
    cout << data.front() << endl;
    cout << data[0] << endl;

    // std::vector
    std::vector<int> numbers = {1,2,3};
    std::vector<std::string> names = {"Keun", "Mo"};

    names.emplace_back("Koo");

    cout << "First name : " << names.back() << endl;
    cout << "Last number: " << numbers.back() << endl;

    // vector optimization using reserve()
    const int N = 100;
    
    std::vector<int> vec;  // size 0, capacity 0
    vec.reserve(N);        // size 0, capacity 100
    for (int i = 0; i < N; ++i){
        vec.emplace_back(i);
    }
    cout << "vec size: " << vec.size() << endl;
    cout << "vec capa: " << vec.capacity() << endl;

    std::vector<int> vec2; // size 0, capacity 0
    for (int i = 0; i < N; i++){
        vec2.emplace_back(i);
    }
    cout << "vec2 size: " << vec2.size() << endl;
    cout << "vec2 capa: " << vec2.capacity() << endl;
    // vec2 ends with size 100, capacity 128 => consume more memory!!

    // std::map
    using StudentList = std::map<int, std::string>; // key must comparable
    StudentList cpp_students;

    cpp_students.emplace(1590, "Koo");  // [1]
    cpp_students.emplace(1040, "Kang"); // [0]
    cpp_students.emplace(8820, "Park"); // [2]
    // sorted by key
    for (const auto& [id, name] : cpp_students){
        cout << "id: " << id << ", " << name << endl;
    }

    // std::unordered_map
    // exact same as map, but implemented as hash table. faster than map.
    using StudentList2 = std::unordered_map<int, std::string>; // key must hashable
    StudentList2 cpp_students2;

    cpp_students2.emplace(1590, "Koo");  // [2]
    cpp_students2.emplace(1040, "Kang"); // [1]
    cpp_students2.emplace(8820, "Park"); // [0]

    for (const auto& [id, name] : cpp_students2){
        cout << "id: " << id << ", " << name << endl;
    }

    return 0;
}
