// --------------------------------------------------------------------------------
// 2024 1�б� STL  ��910ȭ78        4�� 15�� ������                            (7��1)
// 
// 5�� 6�� ������ ���� ��
// 4�� 23�� ����
//
// vector - dynamic array
// --------------------------------------------------------------------------------

#include <iostream>
#include <vector>

#include "String.h"
#include "save.h"

using namespace std;

extern bool ����;


int main() {
    vector<int> v { 1, 3, 2, 3, 4, 5, 3, 3, 3, 5, 1, 65, 12, 6, 33, 333, 3333 };

    // [����] v���� 3�� �����ϰ� ����϶�.

    // erase-remove idiom
    v.erase(remove(v.begin(), v.end(), 3));

    for(int num : v) {
        cout << num << ' ';
    }
    cout << endl;

    save("stl.cpp");
}
