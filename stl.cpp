// --------------------------------------------------------------------------------
// 2024 1�б� STL  ��910ȭ78        5�� 27�� ������                           (13��1)
// 
// Unordered Associative container
// - unordered?
// - �޸� ����?
// - ���� ���� String�� ���� ����?
// 
// 6�� 11�� ȭ����(15��2) - �⸻����
// --------------------------------------------------------------------------------

#include <iostream>
#include <unordered_set>

#include "String.h"
#include "save.h"

using namespace std;

extern bool ����;


int main() {
    unordered_set<int> us { 3, 1, 4, 2 };

    us.insert(7);
    us.insert(10);

    for(int n : us) {
        cout << n << ' ';
    }
    cout << endl;

    //save("stl.cpp");
}
