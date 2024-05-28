// --------------------------------------------------------------------------------
// 2024 1학기 STL  월910화78        5월 28일 화요일                           (13주2)
// 
// Unordered Associative container
// - unordered?
// - 메모리 구조?
// - 내가 만든 String도 관리 가능?
// 
// 6월 11일 화요일(15주2) - 기말시험
// --------------------------------------------------------------------------------

#include <iostream>
#include <unordered_set>
#include <print>

#include "String.h"
#include "save.h"

using namespace std;

extern bool 관찰;


struct 해쉬 {
    size_t operator()(const String& s) const {
        // String s를 std::string으로 변환
        // 그러면 std::string의 hash값을 알려주는 함수를 사용할 수 있다. 
        return hash<string>()({ s.begin(), s.end() });      // TODO: stringview를 이용해보자
    }
};


void print_us(const unordered_multiset<String, 해쉬>& us) {
    for(int i=0; i<us.bucket_count(); ++i) {
        print("[{:3}] ", i);
        for(auto p=us.begin(i); p!=us.end(i); ++p) {
            cout << " - " << *p;
        }
        cout << endl;
    }
    cout << endl;
}


int main() {
    unordered_multiset<String, 해쉬> us { "2024년", "5월", "28일", "재미있는STL" };

    while(true) {
        cout << endl;
        print_us(us);
        cout << endl;

        cout << "추가할 데이터?: ";
        String s;
        cin >> s;
        us.insert(s);
    }

    //save("stl.cpp");
}
