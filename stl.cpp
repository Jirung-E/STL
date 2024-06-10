// --------------------------------------------------------------------------------
// 2024 1학기 STL  월910화78        6월 10일 월요일                           (15주1)
// 
// 
// 
// 6월 11일 화요일(15주2) - 기말시험
// --------------------------------------------------------------------------------

#include <iostream>
#include <algorithm>
#include <vector>
#include <random>
#include <numeric>
#include <ranges>
#include <print>

#include "String.h"
#include "save.h"

using namespace std;

extern bool 관찰;


default_random_engine dre;

// C++20 - ranges라이브러리
// 기존 알고리즘을 다 새로 작성함
// - concept를 사용하여 인자를 제약하였다.
// - projection과 pointer to member 를 사용할 수 있다.
// - 더 풍부한 정보를 담는 return 값 제공

uniform_int_distribution<int> uidC { 'a', 'z' };
uniform_int_distribution uid { 1, 100 };

struct Dog {
    char c = uidC(dre);
    int n { uid(dre) };
};


int main() {
    vector<Dog> dogs(100);

    ranges::sort(dogs, greater{}, &Dog::c);

    for(auto [글자, 숫자] : dogs) {
        cout << 글자 << " --- " << 숫자 << endl;
    }

    //save("stl.cpp");
}
