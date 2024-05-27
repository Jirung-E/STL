// --------------------------------------------------------------------------------
// 2024 1학기 STL  월910화78        5월 27일 월요일                           (13주1)
// 
// Associative Container - map -> dictionary
// 
// map -> 연관배열(인덱스가 int가 아닌 배열)처럼 사용할 수 있다. 
// 
// 6월 11일 화요일(15주2) - 기말시험
// --------------------------------------------------------------------------------

#include <iostream>
#include <map>
#include <random>

#include "String.h"
#include "save.h"

using namespace std;

extern bool 관찰;


default_random_engine dre;
uniform_int_distribution uid { 1, 99'999 };


int main() {
    // 유니폼분포는 정말 유니폼한가?
    // 값을 10등분해서 출현횟수를 출력하라.
    map<int, int> freq;
    for(int i=0; i<1'000'000; ++i) {
        freq[uid(dre)/10'000]++;
    }

    for(const auto& [n, cnt] : freq) {
        cout << n << " - " << cnt << endl;
    }

    //save("stl.cpp");
}
