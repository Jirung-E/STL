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
#include <numeric>
#include <random>
#include <print>
#include <thread>

#include "String.h"
#include "save.h"

using namespace std;

extern bool 관찰;


random_device rd;
default_random_engine dre { rd() };


int main() {
    array<int, 100> a;
    iota(a.begin(), a.end(), 1);

    {
        // 홀짝으로 분리 - partition
        shuffle(a.begin(), a.end(), dre);

        cout << "분리하기 전" << endl;
        for(int num : a) {
            print("{:4}", num);
        }
        puts("");

        auto p = partition(a.begin(), a.end(), [](int n) { return n & 1; });
        cout << endl;

        cout << "홀수" << endl;
        for(auto it=a.begin(); it!=p; ++it) {
            print("{:4}", *it);
        }
        puts("");
        puts("");

        cout << "짝수" << endl;
        for(auto it=p; it!=a.end(); ++it) {
            print("{:4}", *it);
        }
        puts("");
        puts("");
    }

    //save("stl.cpp");
}
