// --------------------------------------------------------------------------------
// 2024 1학기 STL  월910화78        4월 2일 화요일                            (5주2)
// 
// 5월 6일 월요일 강의 함
// 4월 23일 시험
// 
// 
// --------------------------------------------------------------------------------

#include <iostream>
#include <array>
#include <algorithm>

#include "String.h"
#include "save.h"

using namespace std;

extern bool 관찰;


int main() {
    array<String, 5> a { 
        "jfdkl;fjdskajfkdsl",
        "jetufivonmk,34fjdkbvv8909a",
        "",
        "dkssud dhk toswm dktlsmsrnsk",
        "rjq.sk.dj.fuq.tmq.sl.ek."
    };

    //sort(a.begin(), a.end(), [](const String& a, const String& b) { 
    //    return a.getLen() < b.getLen(); 
    //});
    
    // [문제] sort를 사용하여 a가 관리하는 String을 오름차순으로 정렬한 후 출력하라

    for(const String& s : a) {
        auto start = s.getMem();
        sort(start, start + s.getLen());
        //sort(start, start + s.getLen(), [](char a, char b) {
        //    return a > b;
        //});
    }
    
    for(const String& s : a) {
        cout << s << endl;
    }

    save("stl.cpp");
}
