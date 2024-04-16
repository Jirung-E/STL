// --------------------------------------------------------------------------------
// 2024 1학기 STL  월910화78        4월 16일 화요일                            (7주2)
// 
// 5월 6일 월요일 강의 함
// 4월 23일 시험
// 
// deque - vector와 list의 중간형태를 띄는 자료구조(stl에서)
// --------------------------------------------------------------------------------

#include <iostream>
#include <deque>
#include <vector>
#include <list>

#include "String.h"
#include "save.h"

using namespace std;

extern bool 관찰;


class Test {
    char x[4096];
};


int main() {
    //vector<Test> v;     // 2362204
    deque<Test> v;        // 46~~~~~
    //list<Test> v;       // ??

    while(true) {
        try {
            v.push_back(Test {});
        }
        catch(...) {
            cout << endl << endl;
            cout << "여기까지" << endl;
            cout << v.size() << endl;
            break;
        }
    }

    //save("stl.cpp");
}
