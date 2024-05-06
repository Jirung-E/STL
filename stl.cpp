// --------------------------------------------------------------------------------
// 2024 1�б� STL  ��910ȭ78        5�� 6�� ������                            (10��1)
// 
// iterator: Iterators are a generalization of pointers
// --------------------------------------------------------------------------------

#include <iostream>
#include <vector>
#include <array>
#include <span>

#include "String.h"
#include "save.h"

using namespace std;

extern bool ����;


template<class Iter>
void f(Iter it) {
    cout << typeid(Iter::iterator_concept).name() << endl;
}


int main() {
    // [����] �ݺ��ڴ� 6���� ������ �ִ�.
    // �Լ� f���� �ݺ��ڸ� ���ڷ� �Ѱ��ָ� � �������� ����ϰ� �϶�.

    f(vector<int>{}.begin());
    f(array<int, 10>::iterator {});
    f(span<int>::iterator {});

    save("stl.cpp");
}
