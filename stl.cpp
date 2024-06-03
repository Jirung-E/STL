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

#include "String.h"
#include "save.h"

using namespace std;

extern bool 관찰;


default_random_engine dre { random_device {}() };


int main() {
    // [1, 46) 숫자, 이 중에 6개를 뽑아라(로또)
    array<int, 45> a;
    iota(a.begin(), a.end(), 1);

    cout << "이번 주 구매하실 번호입니다." << endl;
    sample(a.begin(), a.end(), ostream_iterator<int> { cout, " " }, 6, dre);

    //save("stl.cpp");
}
