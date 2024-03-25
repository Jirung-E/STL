// --------------------------------------------------------------------------------
// 2024 1학기 STL  월910화78        3월 25일 월요일                            (4주1)
// 
// 동적할당 - RAII
// 
// 앞으로 C++에서 사용하지 않아야 할 것들
// char*        -> string
// T[N]         -> array<T, N>
// T*           -> unique_ptr<T>, shared_ptr<T>
// --------------------------------------------------------------------------------

#include <iostream>

#include "save.h"

using namespace std;

class Dog {
public:
    Dog() { cout << "생성" << endl; };
    ~Dog() { cout << "소멸" << endl; };
};

template<typename T>
class Smart_ptr {
    T* p;

public:
    Smart_ptr(T* p) : p { p } {}
    ~Smart_ptr() { delete p; }
};


void f() {
    cout << "f 시작" << endl;

    // 지역변수와 힙에 할당된 변수를 연결, 블럭을 나갈때 자동으로 소멸자 호출
    Smart_ptr<Dog> d { new Dog };

    throw 1234;
    
    cout << "f 끝" << endl;
}


int main() {
    cout << "main 시작" << endl;

    try {
        f();
    }
    catch(...) {
        cout << "예외가 발생했어요" << endl;
    }

    cout << "main 끝" << endl;

    save("stl.cpp");
}