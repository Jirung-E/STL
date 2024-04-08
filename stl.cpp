// --------------------------------------------------------------------------------
// 2024 1학기 STL  월910화78        4월 2일 화요일                            (6주1)
// 
// 5월 6일 월요일 강의 함
// 4월 23일 시험
// 
// STL - Container
// --------------------------------------------------------------------------------

#include <iostream>
#include <fstream>
#include <array>

#include "String.h"
#include "save.h"

using namespace std;

extern bool 관찰;


int main() {
    array<String, 100> a;

    // [문제] a에 "stl.cpp"에 있는 단어를 저장하라.
    // a를 길이 오름차순으로 정렬하라.
    // 화면에 출력하라.

    ifstream in { "stl.cpp" };
    if(not in) {
        cout << "파일 열기 실패" << endl;
        return 20240408;
    }

    for(int i=0; i<a.size(); ++i) {
        in >> a[i];
    }

    

    for(const auto& str : a) {
        cout << str << endl;
    }

    //save("stl.cpp");
}
