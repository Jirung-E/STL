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

#include "String.h"
#include "save.h"

using namespace std;

extern bool ����;


default_random_engine dre { random_device {}() };


int main() {
    // [1, 46) ����, �� �߿� 6���� �̾ƶ�(�ζ�)
    array<int, 45> a;
    iota(a.begin(), a.end(), 1);

    cout << "�̹� �� �����Ͻ� ��ȣ�Դϴ�." << endl;
    sample(a.begin(), a.end(), ostream_iterator<int> { cout, " " }, 6, dre);

    //save("stl.cpp");
}
