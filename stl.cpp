// --------------------------------------------------------------------------------
// 2024 1학기 STL  월910화78        4월 15일 월요일                            (7주1)
// 
// 5월 6일 월요일 강의 함
// 4월 23일 시험
//
// vector - dynamic array
// --------------------------------------------------------------------------------

#include <iostream>
#include <vector>

#include "String.h"
#include "save.h"

using namespace std;

extern bool 관찰;


int main() {
    vector<int> v { 1, 3, 2, 3, 4, 5, 3, 3, 3, 5, 1, 65, 12, 6, 33, 333, 3333 };

    // [문제] v에서 3을 제거하고 출력하라.

    // erase-remove idiom
    v.erase(remove(v.begin(), v.end(), 3));

    for(int num : v) {
        cout << num << ' ';
    }
    cout << endl;

    save("stl.cpp");
}
