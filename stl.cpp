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
#include <vector>

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

    // [문제] 개수 내림차순으로 출력하라.
    cout << endl << endl;

    vector<pair<char, int>> v { m.begin(), m.end() };

    sort(v.begin(), v.end(), [](const pair<char, int>& e1, const pair<char, int>& e2) {
        return e1.second > e2.second;
    });

    for(const auto& [alpha, num] : v) {
        cout << alpha << " - " << num << endl;
    }

    //save("stl.cpp");
}
