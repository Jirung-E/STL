// --------------------------------------------------------------------------------
// 2024 1학기 STL  월910화78        6월 03일 월요일                           (14주1)
// 
// 
// 
// 6월 11일 화요일(15주2) - 기말시험
// --------------------------------------------------------------------------------

#include <iostream>
#include <array>
#include <algorithm>
#include <random>

#include "String.h"
#include "save.h"

using namespace std;

extern bool 관찰;


random_device rd;
default_random_engine dre { rd() };
uniform_int_distribution<int> uidC { 'A', 'Z' };
uniform_int_distribution uidN { 1, 30 };


struct Dog {
    char c = uidC(dre);
    int n { uidN(dre) };        // 이렇게 하는게 무슨 차이가 있는지 잘 봐라
};


int main() {
    cout << "stable sort" << endl;

    array<Dog, 100> dogs;

    // [문제] dogs를 글자 오름차순으로 정렬하라

    sort(dogs.begin(), dogs.end(), [](const Dog& d1, const Dog& d2) {
        return d1.c < d2.c;
    });

    for(auto [c, n] : dogs) {       // structured binding
        cout << "\t" << c << " - " << n << endl;
    }

    cout << endl << endl;

    stable_sort(dogs.begin(), dogs.end(), [](const Dog& d1, const Dog& d2) {
        return d1.n < d2.n;
    });

    for(auto [c, n] : dogs) {       // structured binding
        cout << "\t" << c << " - " << n << endl;
    }

    //save("stl.cpp");
}
