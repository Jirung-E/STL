// --------------------------------------------------------------------------------
// 2024 1�б� STL  ��910ȭ78        4�� 16�� ȭ����                            (7��2)
// 
// 5�� 6�� ������ ���� ��
// 4�� 23�� ����
// 
// list
// --------------------------------------------------------------------------------

#include <iostream>
#include <list>

#include "String.h"
#include "save.h"

using namespace std;

extern bool ����;


int main() {
    list<String> v { "1", "22", "4444", "55555" };

    auto p = v.begin();
    ++p;
    ++p;

    ���� = true;
    v.emplace(p, "333");
    ���� = false;

    for(const String& s : v) {
        cout << s << endl;
    }

    //save("stl.cpp");
}
