// --------------------------------------------------------------------------------
// 2024 1학기 STL  월910화78        4월 1일 월요일                            (5주1)
// 
// 5월 6일 월요일 강의 함
// 4월 23일 시험
// 
// 
// --------------------------------------------------------------------------------

#include <iostream>
#include <memory>

#include "save.h"

using namespace std;


class String {
    size_t len {};
    unique_ptr<char[]> str;

public:
    String(const char* str) : len { strlen(str) } {
        this->str = make_unique<char[]>(len);
        memcpy(this->str.get(), str, len);
    }

    friend ostream& operator<<(ostream& out, const String& s) {
        for(size_t i=0; i<s.len; ++i) {
            out << s.str.get()[i];
        }
        return out;
    }
};

//using String = string;


int main() {
    String s { "STL을 관찰하기 위한 클래스 입니다." };
    String t = s;

    cout << s << endl;
    cout << t << endl;

    //save("stl.cpp");
}