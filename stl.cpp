// --------------------------------------------------------------------------------
// 2024 1학기 STL  월910화78        4월 16일 화요일                            (7주2)
// 
// 5월 6일 월요일 강의 함
// 4월 23일 시험
// 
// list
// --------------------------------------------------------------------------------

#include <iostream>
#include <list>

#include "String.h"
#include "save.h"

using namespace std;

extern bool 관찰;


int main() {
    list<String> v { "1", "22", "4444", "55555" };

    auto p = v.begin();
    ++p;
    ++p;

    관찰 = true;
    v.emplace(p, "333");
    관찰 = false;

    for(const String& s : v) {
        cout << s << endl;
    }

    //save("stl.cpp");
}
