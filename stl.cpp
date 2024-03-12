// --------------------------------------------------------------------------------
// 2024 1학기 STL  월910화78        3월 12일 화요일                            (2주2)
// 
// --------------------------------------------------------------------------------

#include <iostream>
#include <print>
#include <random>
#include <array>

#include "save.h"

using namespace std;


default_random_engine dre;
uniform_int_distribution<> uidChar { 'a', 'z' };
uniform_int_distribution<> uidNum { 1, 99'999 };


class Dog {
    char c { (char)uidChar(dre) };
    int num { uidNum(dre) };

public:
    friend ostream& operator<<(ostream& os, const Dog& dog) {
        return os << "글자: " << dog.c << ", 숫자: " << dog.num;
    }
};


int main() {
    array<Dog, 100> dogs;

    for(const Dog& dog : dogs) {
        cout << dog << endl;
    }

    save("stl.cpp");
}