// --------------------------------------------------------------------------------
// 2024 1학기 STL  월910화78        5월 14일 화요일                           (11주2)
// 
// 알고리즘 함수는 반복자를 인자로 받는다.
// 6월 11일 화요일(15주2) - 기말시험
// --------------------------------------------------------------------------------

#include <iostream>
#include <vector>
#include <list>

#include "String.h"
#include "save.h"

using namespace std;

extern bool 관찰;


template <class SIter, class DIter>
void my_copy(SIter first, SIter end, DIter dest) {
    while(first != end) {
        *dest = *first;
        ++first;
        ++dest;
    }
}

int main() {
    //save("stl.cpp");

    String s { "20240514 기말시험 6월 15일 15주 2일" };

    //my_copy(s.begin(), s.end(), ostream_iterator<char>{cout});


    vector<char> v(s.getLen());         // reserve를 했을땐 안됐는데 왜 이건 될까
                                        // capacity는 늘어났지만 size는 그대로
                                        // v.end()가 v.begin()과 같은 위치
                                        // -> for문 안돈다

    my_copy(s.begin(), s.end(), v.begin());

    for(char c : v) {
        cout << c;
    }
    cout << endl;


    list<char> l(s.getLen());

    my_copy(s.begin(), s.end(), l.begin());

    for(char c : l) {
        cout << c;
    }
    cout << endl;
}
