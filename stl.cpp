// --------------------------------------------------------------------------------
// 2024 1학기 STL  월910화78        5월 14일 화요일                           (11주2)
// 
// 알고리즘 함수는 반복자를 인자로 받는다.
// 6월 11일 화요일(15주2) - 기말시험
// --------------------------------------------------------------------------------

#include <iostream>

#include "String.h"
#include "save.h"

using namespace std;

extern bool 관찰;


 //세번째 인자는 callable type인데 이 중에서 boolean값을 리턴하는 것을 
 //특별히 predicate이라고 부른다(조건자, 서술자, 판단자)
template <class Iter, class Cond>
Iter my_find_if(Iter first, Iter last, Cond func) {
    while(last != first) {
        if(func(*first)) {
            return first;
        }
        ++first;
    }
    return last;
}


int main() {
    //save("stl.cpp");

    String s { "20240514 기말시험 6월 15일 15주 2일" };

    // [문제] 사용자가 찾는 조건에 맞는 글자가 s에 있는지 알려주자
    // 조건: 숫자를 찾아서 홀수인지

    auto p = s.begin();
    while(p != s.end()) {
        p = my_find_if(p+1, s.end(), [](char c) {
            if(isdigit(c)) {
                if(c & 1) {
                    return true;
                }
            }
            return false;
        });

        if(p != s.end()) {
            cout << *p << "는 s의 " << distance(s.begin(), p) + 1
                << "번째 문자입니다." << endl;
        }
        else {
            break;
        }
    }

    auto beg = s.begin();
    while(true) {
        auto p = my_find_if(beg, s.end(), [](char c) {
            if(isdigit(c)) {
                if(c & 1) {
                    return true;
                }
            }
            return false;
        });

        if(p != s.end()) {
            cout << *p << "는 s의 " << distance(s.begin(), p) + 1
                << "번째 문자입니다." << endl;
        }
        else {
            break;
        }

        beg = p + 1;
    }
}
