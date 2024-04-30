// --------------------------------------------------------------------------------
// 2024 1학기 STL  월910화78        4월 30일 월요일                            (9주1)
// 
// 5월 6일 월요일 강의 함
// 
// list
// --------------------------------------------------------------------------------

#include <iostream>
#include <list>

#include "String.h"
#include "save.h"

using namespace std;

extern bool 관찰;


int main() {
    list<String> name1 { "이준", "이현", "이서", "서아", "은우" };
    list<String> name2 { "하준", "연우", "시우", "지안", "도윤", "서윤" };

    // [문제] 리스트 2개를 하나로 합쳐 주세요.
    name1.merge(name2, [](const String& s1, const String& s2) {
        //return strcmp(s1.getMem(), s2.getMem());
        return s1.getLen() < s2.getLen();
    });

    for(const auto& s : name1) {
        cout << s << endl;
    }

    //save("stl.cpp");
}
