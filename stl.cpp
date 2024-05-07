// --------------------------------------------------------------------------------
// 2024 1�б� STL  ��910ȭ78        5�� 7�� ȭ����                            (10��2)
// 
// iterator: Iterators are a generalization of pointers
// --------------------------------------------------------------------------------

#include <iostream>
#include <algorithm>

#include "String.h"
#include "save.h"

using namespace std;

extern bool ����;


template <class Iter>
void f(Iter iter) {
    cout << typeid(iterator_traits<Iter>::iterator_category).name() << endl;
    // C++ 17
    cout << typeid(Iter::iterator_concept).name() << endl;
}


int main() {
    String s { "1357924680" };

    sort(s.rbegin(), s.rend());

    cout << s << endl;

    //save("stl.cpp");
}
