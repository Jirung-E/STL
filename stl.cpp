// --------------------------------------------------------------------------------
// 2024 1학기 STL  월910화78        6월 10일 월요일                           (15주1)
// 
// 
// 
// 6월 11일 화요일(15주2) - 기말시험
// --------------------------------------------------------------------------------

#include <iostream>
#include <ranges>
#include <print>

#include "String.h"
#include "save.h"

using namespace std;

extern bool 관찰;


int main() {
    // 소수(prime number)를 출력하라
    auto 소수 = [](int n) {
        if(n <= 1) {
            return false;
        }

        for(int i=2; i<= int(sqrt(double(n))); ++i) {
            if(0 == n % i) {
                return false;
            }
        }

        return true;
    };

    for(int num : views::iota(1) | views::filter(소수) | views::take(100)) {
        print("{} ", num);
    }
    cout << endl << endl;

    //save("stl.cpp");
}
