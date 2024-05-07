// --------------------------------------------------------------------------------
// 2024 1�б� STL  ��910ȭ78        5�� 7�� ȭ����                            (10��2)
// 
// iterator: Iterators are a generalization of pointers
// --------------------------------------------------------------------------------

#include <iostream>

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

    // �ݺ����� �Ӽ��� Ȯ���ϴ� ǥ�� ������ ������ �� �־�� �Ѵ�.
    // C++ ǥ���� ��Ű�� �ݺ��ڰ� �Ƿ��� ���� �ټ����� �׸��� �����ؾ� �Ѵ�.
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
