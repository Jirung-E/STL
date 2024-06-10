// --------------------------------------------------------------------------------
// 2024 1학기 STL  월910화78        6월 10일 월요일                           (15주1)
// 
// 
// 
// 6월 11일 화요일(15주2) - 기말시험
// --------------------------------------------------------------------------------

#include <iostream>
#include <vector>
#include <ranges>
#include <print>
#include <chrono>

#include "String.h"
#include "save.h"

using namespace std;

extern bool 관찰;


int main() {
    auto start = chrono::system_clock::now();
    vector<int> v = ranges::to<vector>(views::iota(1)
        | views::drop(10000)
        | views::take(1'000'000));
    auto end = chrono::system_clock::now();

    cout << "elapsed time: " << chrono::duration_cast<chrono::microseconds>(end - start).count() << " micro seconds" << endl;

    //for(auto n : v) {
    //    cout << n << ' ';
    //}

    //save("stl.cpp");
}
