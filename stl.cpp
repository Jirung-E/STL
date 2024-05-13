// --------------------------------------------------------------------------------
// 2024 1학기 STL  월910화78        5월 13일 월요일                            (11주1)
// 
// iterator: Iterators are a generalization of pointers
// --------------------------------------------------------------------------------

#include <iostream>
#include <algorithm>

#include "String.h"
#include "save.h"

using namespace std;

extern bool 관찰;


template <class Iter>
void f(Iter iter) {
    cout << typeid(iterator_traits<Iter>::iterator_category).name() << endl;
    // C++ 17
    cout << typeid(Iter::iterator_concept).name() << endl;
}


int main() {
    String s { "1357924680" };

    sort(s.begin(), s.end());

    cout << s << endl;

    //save("stl.cpp");
}
