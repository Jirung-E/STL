// --------------------------------------------------------------------------------
// 2024 1�б� STL  ��910ȭ78        5�� 13�� ������                            (11��1)
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

    sort(s.begin(), s.end());

    cout << s << endl;

    //save("stl.cpp");
}
