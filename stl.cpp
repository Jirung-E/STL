// --------------------------------------------------------------------------------
// 2024 1�б� STL  ��910ȭ78        6�� 04�� ȭ����                           (14��2)
// 
// �ݺ��ڰ��� �Ÿ��� ��� distance�Լ��� �� �˾ƺ���.
// 
// 6�� 11�� ȭ����(15��2) - �⸻����
// --------------------------------------------------------------------------------

#include <iostream>
#include <algorithm>
#include <vector>
#include <list>

#include "String.h"
#include "save.h"

using namespace std;

extern bool ����;


int main() {
    list<int> v { 1, 2, 3, 4, 5 };

    auto p = v.begin();
    --p;

    if(p == v.end()) {
        cout << "���߿��Ḯ��Ʈ" << endl;
    }

    // distance�Լ��� �ݺ��ڰ��� �Ÿ��� ���.

    cout << distance(v.end(), v.begin());       // 1�� ���´�?!

    //save("stl.cpp");
}
