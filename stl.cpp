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
        cout << endl;

        auto p = partition(a.begin(), a.end(), [](int n) { return n & 1; });
        cout << endl;

        cout << "Ȧ��" << endl;
        for(auto it=a.begin(); it!=p; ++it) {
            print("{:4}", *it);
        }
        cout << endl;
        cout << endl;

        cout << "¦��" << endl;
        for(auto it=p; it!=a.end(); ++it) {
            print("{:4}", *it);
        }
        cout << endl;
        cout << endl;
    }

    cout << endl;
    cout << endl;

    {
        // 30������� ������ - nth_element
        shuffle(a.begin(), a.end(), dre);

        cout << "30������� �������� �и��ϱ� ��" << endl;
        for(int num : a) {
            print("{:4}", num);
        }
        cout << endl;

        auto nth = a.begin() + 30;
        nth_element(a.begin(), nth, a.end());
        
        cout << endl;

        cout << "30�����" << endl;
        for(auto it=a.begin(); it!=nth; ++it) {
            print("{:4}", *it);
        }
        cout << endl;
        cout << endl;

        cout << "������" << endl;
        for(auto it=nth; it!=a.end(); ++it) {
            print("{:4}", *it);
        }
        cout << endl;
        cout << endl;
    }

    cout << endl;
    cout << endl;

    {
        // 30������� ���� - partial_sort
        shuffle(a.begin(), a.end(), dre);

        cout << "30������� �����ϱ� ��" << endl;
        for(int num : a) {
            print("{:4}", num);
        }
        cout << endl;

        auto nth = a.begin() + 30;
        partial_sort(a.begin(), nth, a.end());

        cout << endl;

        cout << "30������� ���ĵ�" << endl;
        for(auto it=a.begin(); it!=nth; ++it) {
            print("{:4}", *it);
        }
        cout << endl;
        cout << endl;

        cout << "������" << endl;
        for(auto it=nth; it!=a.end(); ++it) {
            print("{:4}", *it);
        }
        cout << endl;
        cout << endl;
    }

    cout << endl;
    cout << endl;

    //save("stl.cpp");
}
