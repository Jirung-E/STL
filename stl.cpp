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


template <class Iter>
void f(Iter iter) {
    cout << typeid(iterator_traits<Iter>::iterator_category).name() << endl;
    // C++ 17
    cout << typeid(Iter::iterator_concept).name() << endl;
}


int main() {
    String s { "1357924680" };

    // 반복자의 속성을 확인하는 표준 질문에 응답할 수 있어야 한다.
    // C++ 표준을 지키는 반복자가 되려면 다음 다섯가지 항목을 정의해야 한다.
    // difference_type	   
    // value_type	       
    // pointer	           
    // reference	       
    // iterator_category

    f(s.begin());
    f(s.rbegin());

    for(auto it=s.rbegin(); it!=s.rend(); ++it) {
        cout << *it << ' ';
    }
    cout << endl;

    save("stl.cpp");
}
