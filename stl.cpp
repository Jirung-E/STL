// --------------------------------------------------------------------------------
// 2024 1학기 STL  월910화78        4월 16일 화요일                            (7주2)
// 
// 5월 6일 월요일 강의 함
// 4월 23일 시험
// --------------------------------------------------------------------------------

#include <iostream>
#include <print>
#include <vector>
#include <numeric>

#include "String.h"
#include "save.h"

using namespace std;

extern bool 관찰;


int main() {
    관찰 = true;

    vector<String> v { "1", "2", "3", "4", "5" };

    // [문제] v에서 "3"을 삭제하라.

    erase(v, "3");
    
    for(const String& s : v) {
        cout << s << endl;
    }

    //save("stl.cpp");
}
