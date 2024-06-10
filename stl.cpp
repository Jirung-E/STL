// --------------------------------------------------------------------------------
// 2024 1학기 STL  월910화78        6월 10일 월요일                           (15주1)
// 
// 
// 
// 6월 11일 화요일(15주2) - 기말시험
// --------------------------------------------------------------------------------

#include <iostream>
#include <algorithm>
#include <vector>
#include <random>
#include <numeric>
#include <ranges>
#include <print>

#include "String.h"
#include "save.h"

using namespace std;

extern bool 관찰;


default_random_engine dre;


int main() {
    vector<int> v(100);
    //iota(v.begin(), v.end(), 1);
    ranges::iota(v, 1);     // constrained-algorithm    ->   concept을 이용해서 제약

    ranges::shuffle(v, dre);

    for(int num : v) {
        print("{:4}", num);
    }
    cout << endl << endl;

    ranges::sort(v);

    for(int num : v) {
        print("{:4}", num);
    }
    cout << endl << endl;

    for(int num : views::iota(1)) {
        print("{:4} ", num);
    }

    //save("stl.cpp");
}
