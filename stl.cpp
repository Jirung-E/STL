// --------------------------------------------------------------------------------
// 2024 1학기 STL  월910화78        4월 9일 화요일                            (6주2)
// 
// 5월 6일 월요일 강의 함
// 4월 23일 시험
//
// vector - dynamic array
// --------------------------------------------------------------------------------

#include <print>
#include <iostream>
#include <vector>
#include <random>
#include <algorithm>
#include <ranges>

#include "String.h"
#include "save.h"

using namespace std;

extern bool 관찰;


default_random_engine dre;
uniform_int_distribution<> uid { 1, 10'000 };


int main() {
    while(true) {
        vector<int> v;

        // [예제] int 값 num을 입력받아 v에 [1, 10000]값을 갖는 int num개를 추가
        // 오름차순 정렬한다.
        // 값을 출력한다. 

        cout << "숫자를 알려주세요: ";
        int num;
        cin >> num;

        v.reserve(num);
        for(int i=0; i<num; ++i) {
            v.push_back(uid(dre));
        }

        sort(v.begin(), v.end(), [](int a, int b) {
            return a < b;
        });

        // 앞에서 100개만
        // ranges헤더
        for(auto n : v | views::take(100)) {
            print("{:8}", n);
        }
    }

    //save("stl.cpp");
}
