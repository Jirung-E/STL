// --------------------------------------------------------------------------------
// 2024 1�б� STL  ��910ȭ78        3�� 12�� ȭ����                            (2��2)
// 
// --------------------------------------------------------------------------------

#include <iostream>
#include <print>
#include <random>
#include <array>

#include "save.h"

using namespace std;


default_random_engine dre;
uniform_int_distribution<> uidChar { 'a', 'z' };
uniform_int_distribution<> uidNum { 1, 99'999 };


class Dog {
    char c { (char)uidChar(dre) };
    int num { uidNum(dre) };

public:
    friend ostream& operator<<(ostream& os, const Dog& dog) {
        return os << "����: " << dog.c << ", ����: " << dog.num;
    }
};


int main() {
    array<Dog, 100> dogs;

    for(const Dog& dog : dogs) {
        cout << dog << endl;
    }

    // [����] dogs�� binary mod/write�� ���Ͽ� ����϶�.
    // ��ϵ� ������ �о num���� ���� ū Dog�� ã�� ȭ�鿡 ����϶�.

    save("stl.cpp");
}