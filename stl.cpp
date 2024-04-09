// --------------------------------------------------------------------------------
// 2024 1학기 STL  월910화78        4월 9일 화요일                            (6주2)
// 
// 5월 6일 월요일 강의 함
// 4월 23일 시험
//
// vector - dynamic array
// --------------------------------------------------------------------------------

#include <iostream>
#include <vector>
#include <algorithm>

#include "String.h"
#include "save.h"

using namespace std;

extern bool 관찰;


int main() {
    // [문제] 키보드에서 입력한 String을 길이오름차순 정렬하여 출력하라.

    //관찰 = true;

    vector<String> numbers { istream_iterator<String> { cin }, {} };

    sort(numbers.begin(), numbers.end(), [](const String& a, const String& b) {
        return a.getLen() < b.getLen();
    });

    for(const String& s : numbers) {
        cout << s << endl;
    }

    //save("stl.cpp");
}
