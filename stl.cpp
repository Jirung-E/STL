// --------------------------------------------------------------------------------
// 2024 1학기 STL  월910화78        4월 15일 월요일                            (7주1)
// 
// 5월 6일 월요일 강의 함
// 4월 23일 시험
//
// vector - dynamic array
// --------------------------------------------------------------------------------

#include <iostream>
#include <fstream>
#include <vector>

#include "String.h"
#include "save.h"

using namespace std;

extern bool 관찰;


int main() {
    // [문제] "stl.cpp"에 있는 알파벳 소문자의 출현 횟수를 다음과 같이 출력하라
    // a - 20
    // b - 3
    // c - 1
    // ...
    // z - 2

    ifstream in { "stl.cpp" };
    if(not in) {
        return 0;
    }

    vector<int> counts { };
    counts.resize('z'-'a'+1);

    char c;
    while(in >> c) {
        if(islower(c)) {
            ++counts[c-'a'];
        }
    }


    for(int i=0; i<counts.size(); ++i) {
        cout << char(i+'a') << " - " << counts[i] << endl;
    }

    //save("stl.cpp");
}
