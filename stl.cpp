// --------------------------------------------------------------------------------
// 2024 1학기 STL  월910화78        5월 14일 화요일                           (11주2)
// 
// 알고리즘 함수는 반복자를 인자로 받는다.
// 6월 11일 화요일(15주2) - 기말시험
// --------------------------------------------------------------------------------

#include <iostream>
#include <vector>

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


    vector<char> v;

    my_copy(s.begin(), s.end(), back_inserter(v));

    for(char c : v) {
        cout << c;
    }
    cout << endl;
}
