// --------------------------------------------------------------------------------
// 2024 1학기 STL  월910화78        5월 7일 화요일                            (10주2)
// 
// iterator: Iterators are a generalization of pointers
// --------------------------------------------------------------------------------

#include <iostream>
#include <span>

#include "String.h"
#include "save.h"

using namespace std;

extern bool 관찰;


int main() {
    String s { "1357924680" };
    span<char> sp { s.begin(), s.end() };

    // [문제] 거꾸로 출력하라
    for(auto it=sp.rbegin(); it!=sp.rend(); ++it) {
        cout << *it << ' ';
    }
    cout << endl;

    save("stl.cpp");
}
