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

#include "String.h"
#include "save.h"

using namespace std;

extern bool 관찰;


template <class Iter, class Pred>
bool my_all_of(const Iter& first, const Iter& last, Pred pred) {
    for(auto it=first; it!=last; ++it) {
        if(!pred(*it)) {
            return false;
        }
    }
    return true;
}


int main() {
    array<int, 5> a { 1, 3, 5, 7, 9 };

    // [문제] a의 원소가 모두 홀수인가? 검사하고 출력하라.
    
    bool is_odd = my_all_of(a.begin(), a.end(), [](int n) {
        return n & 1;
    });

    if(is_odd) {
        cout << "모두 홀수" << endl;
    }
    else {
        cout << "모두가 홀수인것은 아니다." << endl;
    }

    //save("stl.cpp");
}
