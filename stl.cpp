// --------------------------------------------------------------------------------
// 2024 1학기 STL  월910화78        4월 30일 월요일                            (9주1)
// 
// 5월 6일 월요일 강의 함
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
    // [문제] "stl.cpp"의 소문자를 list<char>에 push_back()으로 저장하라.
    ifstream in { "stl.cpp" };
    if(not in) {
        return 0;
    }

    list<char> charlist;
    
    char c;
    while(in >> c) {
        if(islower(c)) {
            charlist.push_back(c);
        }
    }

    // 출력하라.
    for(char c : charlist) {
        cout << c;
    }
    cout << endl;

    // 모든 소문자가 다 있나 확인하라.
    charlist.sort();
    cout << charlist.unique() << endl;
    for(char c : charlist) {
        cout << c;
    }
    cout << endl;
    cout << charlist.size() << endl;
    if(charlist.size() == 'z'-'a'+1) {
        cout << "다있다" << endl;
    }
    else {
        cout << "모자라" << endl;
    }

    //save("stl.cpp");
}
