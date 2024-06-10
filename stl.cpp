// --------------------------------------------------------------------------------
// 2024 1�б� STL  ��910ȭ78        6�� 10�� ������                           (15��1)
// 
// 
// 
// 6�� 11�� ȭ����(15��2) - �⸻����
// --------------------------------------------------------------------------------

#include <iostream>
#include <vector>
#include <ranges>
#include <print>
#include <chrono>

#include "String.h"
#include "save.h"

using namespace std;

extern bool ����;


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
