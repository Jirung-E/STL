// --------------------------------------------------------------------------------
// 2024 1�б� STL  ��910ȭ78        6�� 10�� ������                           (15��1)
// 
// 
// 
// 6�� 11�� ȭ����(15��2) - �⸻����
// --------------------------------------------------------------------------------

#include <iostream>
#include <algorithm>
#include <vector>
#include <random>
#include <numeric>
#include <ranges>
#include <print>

#include "String.h"
#include "save.h"

using namespace std;

extern bool ����;


default_random_engine dre;

// C++20 - ranges���̺귯��
// ���� �˰����� �� ���� �ۼ���
// - concept�� ����Ͽ� ���ڸ� �����Ͽ���.
// - projection�� pointer to member �� ����� �� �ִ�.
// - �� ǳ���� ������ ��� return �� ����

uniform_int_distribution<int> uidC { 'a', 'z' };
uniform_int_distribution uid { 1, 100 };

struct Dog {
    char c = uidC(dre);
    int n { uid(dre) };
};


int main() {
    vector<Dog> dogs(100);

    ranges::sort(dogs, greater{}, &Dog::c);

    for(auto [����, ����] : dogs) {
        cout << ���� << " --- " << ���� << endl;
    }

    //save("stl.cpp");
}
