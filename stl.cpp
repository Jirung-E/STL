// --------------------------------------------------------------------------------
// 2024 1�б� STL  ��910ȭ78        3�� 19�� ȭ����                            (3��2)
// 
// ���� ������ �޸� ���� - STACK, CODE, DATA, Free store(heap)
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
    string s { "�޸� ����" };

    f();

    string* p = new string[2];

    //save("stl.cpp");
}