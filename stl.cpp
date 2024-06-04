// --------------------------------------------------------------------------------
// 2024 1학기 STL  월910화78        6월 04일 화요일                           (14주2)
// 
// 반복자간의 거리를 재는 distance함수를 잘 알아본다.
// 
// 6월 11일 화요일(15주2) - 기말시험
// --------------------------------------------------------------------------------

#include <iostream>
#include <algorithm>
#include <vector>
#include <list>

#include "String.h"
#include "save.h"

using namespace std;

extern bool 관찰;


int main() {
    list<int> v { 1, 2, 3, 4, 5 };

    auto p = v.begin();
    --p;

    if(p == v.end()) {
        cout << "이중연결리스트" << endl;
    }

    // distance함수로 반복자간의 거리를 잰다.

    cout << distance(v.end(), v.begin());       // 1이 나온다?!

    //save("stl.cpp");
}
