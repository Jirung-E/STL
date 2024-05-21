// --------------------------------------------------------------------------------
// 2024 1학기 STL  월910화78        5월 21일 화요일                           (12주2)
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
#include <list>

#include "String.h"
#include "save.h"

using namespace std;

extern bool 관찰;


int main() {
    // 그룹과 멤버
    map<String, list<String>> m { 
        { "아이브", { "안유진", "가을", "레이", "장원영", "리즈", "이서" } }
    };

    m.insert(pair<String, list<String>> { 
        "블랙핑크", { "지수", "제니", "로제", "리사" }
    });
    
    m.insert(make_pair(
        "아이유", list<String> { "아이유" }
    ));

    m["르세라핌"] = { "사쿠라", "김채원", "허윤진", "카즈하", "홍은채" };

    // 전체 출력
    for(const auto& [group, members] : m) {
        cout << group << " - " << members.size() << "명" << endl;
        for(const String& member : members) {
            cout << member << ' ';
        }
        cout << endl << endl;
    }

    //save("stl.cpp");
}
