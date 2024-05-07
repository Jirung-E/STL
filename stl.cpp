// --------------------------------------------------------------------------------
// 2024 1학기 STL  월910화78        5월 7일 화요일                            (10주2)
// 
// iterator: Iterators are a generalization of pointers
// --------------------------------------------------------------------------------

#include <iostream>

#include "String.h"
#include "save.h"

using namespace std;

extern bool 관찰;


int main() {
    String s { "1357924680" };

    // [문제] 거꾸로 출력하라
    for(auto it=s.rbegin(); it!=s.rend(); ++it) {
        cout << *it << ' ';
    }
    cout << endl;

    //save("stl.cpp");
}
