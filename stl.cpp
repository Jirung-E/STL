// --------------------------------------------------------------------------------
// 2024 1학기 STL  월910화78        4월 22일 월요일                            (8주1)
// 
// 5월 6일 월요일 강의 함
// 4월 23일 시험
// 
// list
// --------------------------------------------------------------------------------

#include <iostream>
#include <fstream>
#include <list>

#include "String.h"
#include "save.h"

using namespace std;

extern bool 관찰;


int main() {
    list<String> cont;

    관찰 = true;

    // [문제] "String.cpp"에 있는 단어를 cont에 저장하라.
    ifstream ifs { "String.cpp" };
    if(not ifs) {
        cout << "파일을 열지 못했습니다." << endl;
        return 0;
    }

    String s;
    while(ifs >> s) {
        cont.emplace_back(s);       // 이렇게 하면 push_back과 똑같이 동작
    }

    관찰 = false;

    for(const auto& e : cont) {
        cout << e << endl;
    }

    //save("stl.cpp");
}
