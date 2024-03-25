// --------------------------------------------------------------------------------
// 2024 1�б� STL  ��910ȭ78        3�� 25�� ������                            (4��1)
// 
// �����Ҵ� - RAII
// 
// ������ C++���� ������� �ʾƾ� �� �͵�
// char*        -> string
// T[N]         -> array<T, N>
// T*           -> unique_ptr<T>, shared_ptr<T>
// --------------------------------------------------------------------------------

#include <iostream>

#include "save.h"

using namespace std;

class Dog {
public:
    Dog() { cout << "����" << endl; };
    ~Dog() { cout << "�Ҹ�" << endl; };
};

template<typename T>
class Smart_ptr {
    T* p;

public:
    Smart_ptr(T* p) : p { p } {}
    ~Smart_ptr() { delete p; }
};


void f() {
    cout << "f ����" << endl;

    // ���������� ���� �Ҵ�� ������ ����, ���� ������ �ڵ����� �Ҹ��� ȣ��
    Smart_ptr<Dog> d { new Dog };

    throw 1234;
    
    cout << "f ��" << endl;
}


int main() {
    cout << "main ����" << endl;

    try {
        f();
    }
    catch(...) {
        cout << "���ܰ� �߻��߾��" << endl;
    }

    cout << "main ��" << endl;

    save("stl.cpp");
}