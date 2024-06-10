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


int main() {
    vector<int> v(100);
    //iota(v.begin(), v.end(), 1);
    ranges::iota(v, 1);     // constrained-algorithm    ->   concept�� �̿��ؼ� ����

    ranges::shuffle(v, dre);

    for(int num : v) {
        print("{:4}", num);
    }
    cout << endl << endl;

    ranges::sort(v);

    for(int num : v) {
        print("{:4}", num);
    }
    cout << endl << endl;

    for(int num : views::iota(1)) {
        print("{:4} ", num);
    }

    //save("stl.cpp");
}
