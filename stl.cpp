// --------------------------------------------------------------------------------
// 2024 1�б� STL  ��910ȭ78        6�� 03�� ������                           (14��1)
// 
// 
// 
// 6�� 11�� ȭ����(15��2) - �⸻����
// --------------------------------------------------------------------------------

#include <iostream>
#include <array>
#include <algorithm>
#include <random>
#include <ranges>

#include "String.h"
#include "save.h"

using namespace std;

extern bool ����;


random_device rd;
default_random_engine dre { rd() };
uniform_int_distribution<int> uidC { 'A', 'Z' };
uniform_int_distribution uidN { 1, 30 };


struct Dog {
    char c = uidC(dre);
    int n { uidN(dre) };        // �̷��� �ϴ°� ���� ���̰� �ִ��� �� ����
};


int main() {
    cout << "stable sort" << endl;

    array<Dog, 100> dogs;

    // [����] dogs�� ���� ������������ �����϶�

    ranges::sort(dogs, {}, &Dog::c);
    ranges::stable_sort(dogs, {}, &Dog::n);

    for(auto [c, n] : dogs) {       // structured binding
        cout << "\t" << c << " - " << n << endl;
    }

    //save("stl.cpp");
}
