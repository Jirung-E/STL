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
uniform_int_distribution uid { 1, 99'999 };


int main() {
    // ������������ ���� �������Ѱ�?
    // ���� 10����ؼ� ����Ƚ���� ����϶�.
    map<int, int> freq;
    for(int i=0; i<1'000'000; ++i) {
        freq[uid(dre)/10'000]++;
    }

    for(const auto& [n, cnt] : freq) {
        cout << n << " - " << cnt << endl;
    }

    //save("stl.cpp");
}
