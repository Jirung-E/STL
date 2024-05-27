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
#include <fstream>
#include <map>
#include <algorithm>

#include "String.h"
#include "save.h"

using namespace std;

extern bool 관찰;


int main() {
    // [문제] "이상한 나라의 앨리스.txt"파일을 한 번 읽어서
    // 소문자와 출현 횟수를 다음과 같은 형식으로 출력하라
    // a - 314
    // b - 216
    // ...
    // z - 10

    ifstream in { "이상한 나라의 앨리스.txt" };
    if(not in) {
        return 0;
    }

    map<char, int> m;
    char c;
    while(in >> c) {
        if(isalpha(c)) {
            m[tolower(c)]++;
        }
    }

    for(const auto& [alpha, num] : m) {
        cout << alpha << " - " << num << endl;
    }

    cout << endl << endl;

    // [문제] 개수 내림차순으로 출력하라.
    map<int, char> icm;

    for(const auto& [alpha, num] : m) {
        icm[num] = alpha;
    }

    for(auto it=icm.rbegin(); it!=icm.rend(); ++it) {
        cout << it->second << " - " << it->first << endl;
    }

    //save("stl.cpp");
}
