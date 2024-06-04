// --------------------------------------------------------------------------------
// 2024 1학기 STL  월910화78        6월 04일 화요일                           (14주2)
// 
// 반복자간의 거리를 재는 distance함수를 잘 알아본다.
// 
// 6월 11일 화요일(15주2) - 기말시험
// --------------------------------------------------------------------------------

#include <iostream>
#include <algorithm>
#include <vector>
#include <list>

#include "String.h"
#include "save.h"

using namespace std;

extern bool 관찰;


template<class Iter>
long long my_distance(Iter first, Iter last) {
    // 랜덤엑세스 반복자라면
    if(is_same_v<typename iterator_traits<Iter>::iterator_category,       // 이게 타입이름이라는걸 알려주기 위해 typename키워드를 쓴다.
        random_access_iterator_tag>) {
        //return last - first;
        return 뺄셈버전(first, last, random_access_iterator_tag());         // tag dispatching
    }

    // 아니라면
    long long step { };
    while(first != last) {
        ++first;
        ++step;
    }
    return step;
}


int main() {
    list<int> v { 1, 2, 3, 4, 5 };

    // distance함수로 반복자간의 거리를 잰다.

    cout << my_distance(v.end(), v.begin());

    //save("stl.cpp");
}
