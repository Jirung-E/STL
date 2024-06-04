// --------------------------------------------------------------------------------
// 2024 1학기 STL  월910화78        6월 04일 화요일                           (14주2)
// 
// 반복자간의 거리를 재는 distance함수를 잘 알아본다.
// 
// 6월 11일 화요일(15주2) - 기말시험
// --------------------------------------------------------------------------------

#include <iostream>

#include "String.h"
#include "save.h"

using namespace std;

extern bool 관찰;


template <class T>
concept 숫자만 = is_integral_v<T> | is_floating_point_v<T>;

template <숫자만 T>
T add(T a, T b) {
    return a + b;
}


int main() {
    // [문제] 함수 템플릿 add를 만들어 주세요
    cout << add(1, 2) << endl;
    cout << add(1.1, 2.2) << endl;
    cout << add("2024년", "6월 4일") << endl;

    //save("stl.cpp");
}
