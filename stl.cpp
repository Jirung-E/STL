// --------------------------------------------------------------------------------
// 2024 1학기 STL  월910화78        5월 6일 월요일                            (10주1)
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

extern bool 관찰;


template<class Iter>
void f(Iter it) {
    cout << typeid(Iter::iterator_concept).name() << endl;
}


int main() {
    // [문제] 반복자는 6가지 종류가 있다.
    // 함수 f에게 반복자를 인자로 넘겨주면 어떤 종류인지 출력하게 하라.

    f(vector<int>{}.begin());
    f(array<int, 10>::iterator {});
    f(span<int>::iterator {});

    save("stl.cpp");
}
