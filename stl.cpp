// --------------------------------------------------------------------------------
// 2024 1�б� STL  ��910ȭ78        5�� 27�� ������                           (13��1)
// 
// Associative Container - map -> dictionary
// 
// map -> �����迭(�ε����� int�� �ƴ� �迭)ó�� ����� �� �ִ�. 
// 
// 6�� 11�� ȭ����(15��2) - �⸻����
// --------------------------------------------------------------------------------

#include <iostream>
#include <map>
#include <random>

#include "String.h"
#include "save.h"

using namespace std;

extern bool ����;


default_random_engine dre;
normal_distribution nd { 0.0, 0.2 };


int main() {
    // ��ֺ����� ���� ����Ѱ�?
    // ���� 20����ؼ� ����Ƚ���� ����϶�.
    map<int, int> freq;

    for(int i=0; i<100'000; ++i) {
        double val = nd(dre) * 50'000 + 50'000;
        if(0 < val && val < 100'000) {
            freq[val/5'000]++;
        }
    }

    for(const auto& [n, cnt] : freq) {
        cout << n << " - " << cnt << endl;
    }

    //save("stl.cpp");
}
