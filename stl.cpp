// --------------------------------------------------------------------------------
// 2024 1학기 STL  월910화78        4월 22일 월요일                            (8주1)
// 
// 5월 6일 월요일 강의 함
// 4월 23일 시험
// 
// list
// --------------------------------------------------------------------------------

#include <iostream>
#include <fstream>
#include <list>
#include <algorithm>

#include "String.h"
#include "save.h"

using namespace std;

extern bool 관찰;


int main() {
    list<String> cont;

    // [문제] "String.cpp"에 있는 단어를 cont에 저장하라.
    ifstream ifs { "String.cpp" };
    if(not ifs) {
        cout << "파일을 열지 못했습니다." << endl;
        return 0;
    }

    cont = { istream_iterator<String>{ifs}, {} };

    관찰 = true;

    // [문제] 길이 오름차순으로 정렬
    cont.sort([](const String& s1, const String& s2) {
        return s1.getLen() < s2.getLen();
    });

    // 뒤집기
    cont.reverse();

    관찰 = false;

    cout << endl;

    // 출력을 거꾸로 하고 싶다
    for(auto p=cont.rbegin(); p!= cont.rend(); ++p) {
        cout << *p << endl;
    }

    save("stl.cpp");
}
