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
#include <ranges>

#include "String.h"
#include "save.h"

using namespace std;

extern bool 관찰;


int main() {
    // [문제] "이상한 나라의 앨리스.txt"파일을 한 번 읽어서
    // 단어와 출현횟수를 출력하라.

    ifstream in { "이상한 나라의 앨리스.txt" };
    if(not in) {
        return 0;
    }

    map<String, int> Sim;
    String s;
    while(in >> s) {
        Sim[s]++;
    }

    for(const auto& [word, num] : Sim) {
        cout << word << " - " << num << endl;
    }

    cout << endl << endl;

    // [문제] 많이 사용된 단어 순으로 출력하라
    multimap<int, String> copy;
    for(const auto& [word, num] : Sim) {
        copy.insert(make_pair(num, word));
    }

    for(const auto& [num, word] : copy | views::reverse) {
        cout << word << " - " << num << endl;
    }

    //save("stl.cpp");
}
