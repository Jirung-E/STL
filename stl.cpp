// --------------------------------------------------------------------------------
// 2024 1�б� STL  ��910ȭ78        5�� 28�� ȭ����                           (13��2)
// 
// �����̳��� ã�� ���� ��
// 0. vector                �ɸ��ð� - 111034ms     100000���� 63170���� ã��
// 1. vector(sorted)        �ɸ��ð� - 53ms         100000���� 63170���� ã��
// 2. set                   �ɸ��ð� - 228ms        100000���� 63170���� ã��
// 3. unordered_set         �ɸ��ð� - 6ms          100000���� 63170���� ã��
// 
// 6�� 11�� ȭ����(15��2) - �⸻����
// --------------------------------------------------------------------------------

#include <iostream>
#include <array>
#include <vector>
#include <set>
#include <unordered_set>
#include <algorithm>
#include <random>
#include <chrono>

#include "String.h"
#include "save.h"

using namespace std;

extern bool ����;


const int NUM = 1000'0000;
const int FNUM =  10'0000;

array<int, NUM> a;
array<int, FNUM> fa;

default_random_engine dre;
uniform_int_distribution uid { 1, NUM };


int main() {
    for(int& num : a) {
        num = uid(dre);
    }

    for(int& num : fa) {
        num = uid(dre);
    }

    {
        // ������ ���Ϳ��� ã��
        cout << "������ ���� �غ���...";
        vector<int> v;
        v.reserve(NUM);
        v = { a.begin(), a.end() };
        sort(v.begin(), v.end());
        cout << endl;

        int cnt { };

        auto start = chrono::high_resolution_clock::now();

        for(int num : fa) {
            bool b = binary_search(v.begin(), v.end(), num);
            if(b) {
                ++cnt;
            }
        }

        auto end = chrono::high_resolution_clock::now();

        auto elapsed = end - start;
        auto et = chrono::duration_cast<chrono::milliseconds>(elapsed);
        cout << "�ɸ��ð� - "<< et << endl;

        cout << FNUM << "���� " << cnt << "���� ã��" << endl;
    }

    cout << endl;

    {
        // ��Ƽ�¿��� ã��
        cout << "��Ƽ�� �غ���...";
        multiset<int> s { a.begin(), a.end() };
        cout << endl;

        int cnt { };

        auto start = chrono::high_resolution_clock::now();

        for(int num : fa) {
            bool b = s.contains(num);
            if(b) {
                ++cnt;
            }
        }

        auto end = chrono::high_resolution_clock::now();

        auto elapsed = end - start;
        auto et = chrono::duration_cast<chrono::milliseconds>(elapsed);
        cout << "�ɸ��ð� - "<< et << endl;

        cout << FNUM << "���� " << cnt << "���� ã��" << endl;
    }

    cout << endl;

    {
        // unordered��Ƽ�¿��� ã��
        cout << "unordered��Ƽ�� �غ���...";
        unordered_multiset<int> s;
        s.reserve(NUM);
        s = { a.begin(), a.end() };
        cout << endl;

        int cnt { };

        auto start = chrono::high_resolution_clock::now();

        for(int num : fa) {
            bool b = s.contains(num);
            if(b) {
                ++cnt;
            }
        }

        auto end = chrono::high_resolution_clock::now();

        auto elapsed = end - start;
        auto et = chrono::duration_cast<chrono::milliseconds>(elapsed);
        cout << "�ɸ��ð� - "<< et << endl;

        cout << FNUM << "���� " << cnt << "���� ã��" << endl;
    }

    //save("stl.cpp");
}
