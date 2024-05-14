// --------------------------------------------------------------------------------
// 2024 1학기 STL  월910화78        5월 14일 화요일                           (11주2)
// 
// 알고리즘 함수는 반복자를 인자로 받는다.
// 6월 11일 화요일(15주2) - 기말시험
// --------------------------------------------------------------------------------

#include <iostream>

#include "String.h"
#include "save.h"

using namespace std;

extern bool 관찰;


template <class Iter, class Val>
Iter my_find(Iter first, Iter last, Val val) {
    for(Iter it=first; it<last; ++it) {
        if(*it == val) {
            return it;
        }
    }
    return last;
}


int main() {
    //save("stl.cpp");

    String s { "20240513 - stl container iterator algorithm" };

    // [문제] 사용자가 찾는 글자가 s에 있는지 알려주자

    while(true) {
        cout << "찾을 문자는? ";
        char ch;
        cin >> ch;

        auto p = my_find(s.begin(), s.end(), ch);
        if(p != s.end()) {
            cout << ch << "는 s의 " << distance(s.begin(), p) + 1 
                << "번째 문자입니다." << endl;
        }
        else {
            cout << ch << "는 s에 없는 글자입니다." << endl;
        }
    }
}
