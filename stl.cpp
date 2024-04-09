// --------------------------------------------------------------------------------
// 2024 1�б� STL  ��910ȭ78        4�� 9�� ȭ����                            (6��2)
// 
// 5�� 6�� ������ ���� ��
// 4�� 23�� ����
//
// vector - dynamic array
// --------------------------------------------------------------------------------

#include <print>
#include <iostream>
#include <vector>
#include <random>
#include <algorithm>
#include <ranges>

#include "String.h"
#include "save.h"

using namespace std;

extern bool ����;


default_random_engine dre;
uniform_int_distribution<> uid { 1, 10'000 };


int main() {
    while(true) {
        vector<int> v;

        // [����] int �� num�� �Է¹޾� v�� [1, 10000]���� ���� int num���� �߰�
        // �������� �����Ѵ�.
        // ���� ����Ѵ�. 

        cout << "���ڸ� �˷��ּ���: ";
        int num;
        cin >> num;

        v.reserve(num);
        for(int i=0; i<num; ++i) {
            v.push_back(uid(dre));
        }

        sort(v.begin(), v.end(), [](int a, int b) {
            return a < b;
        });

        // �տ��� 100����
        // ranges���
        for(auto n : v | views::take(100)) {
            print("{:8}", n);
        }
    }

    //save("stl.cpp");
}
