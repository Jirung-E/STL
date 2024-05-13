// --------------------------------------------------------------------------------
// 2024 1학기 STL  월910화78        5월 13일 월요일                            (11주1)
// 
// 알고리즘 함수는 반복자를 인자로 받는다.
// --------------------------------------------------------------------------------

#include <iostream>

#include "String.h"
#include "save.h"

using namespace std;

extern bool 관찰;


template <class Iter, class Val>
Iter my_find(Iter first, Iter last, Val val) {

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
            cout << "위치 - " << "을 찾음" << endl;
        }
        else {
            cout << ch << "는 s에 없는 글자입니다." << endl;
        }
    }
}
