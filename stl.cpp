// --------------------------------------------------------------------------------
// 2024 1�б� STL  ��910ȭ78        4�� 2�� ȭ����                            (6��1)
// 
// 5�� 6�� ������ ���� ��
// 4�� 23�� ����
// 
// STL - Container
// --------------------------------------------------------------------------------

#include <iostream>
#include <fstream>
#include <array>

#include "String.h"
#include "save.h"

using namespace std;

extern bool ����;


int main() {
    array<String, 100> a;

    // [����] a�� "stl.cpp"�� �ִ� �ܾ �����϶�.
    // a�� ���� ������������ �����϶�.
    // ȭ�鿡 ����϶�.

    ifstream in { "stl.cpp" };
    if(not in) {
        cout << "���� ���� ����" << endl;
        return 20240408;
    }

    for(int i=0; i<100; ++i) {
        in >> a[i];
    }


    //save("stl.cpp");
}
