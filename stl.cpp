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
#include <numeric>
#include <random>
#include <print>
#include <thread>

#include "String.h"
#include "save.h"

using namespace std;

extern bool ����;


random_device rd;
default_random_engine dre { rd() };


int main() {
    array<int, 100> a;
    iota(a.begin(), a.end(), 1);

    {
        // Ȧ¦���� �и� - partition
        shuffle(a.begin(), a.end(), dre);

        cout << "�и��ϱ� ��" << endl;
        for(int num : a) {
            print("{:4}", num);
        }
        puts("");

        auto p = partition(a.begin(), a.end(), [](int n) { return n & 1; });
        cout << endl;

        cout << "Ȧ��" << endl;
        for(auto it=a.begin(); it!=p; ++it) {
            print("{:4}", *it);
        }
        puts("");
        puts("");

        cout << "¦��" << endl;
        for(auto it=p; it!=a.end(); ++it) {
            print("{:4}", *it);
        }
        puts("");
        puts("");
    }

    //save("stl.cpp");
}
