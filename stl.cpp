// --------------------------------------------------------------------------------
// 2024 1학기 STL  월910화78        3월 19일 화요일                            (3주2)
// 
// 실행 파일의 메모리 영역 - STACK, CODE, DATA, Free store(heap)
// --------------------------------------------------------------------------------

#include <iostream>
#include <string>

#include "save.h"

using namespace std;


void f() {
    int num { 123 };
}

int gnum {};

int main() {
    string s { "메모리 관찰" };

    f();

    string* p = new string[2];

    //save("stl.cpp");
}