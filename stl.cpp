// --------------------------------------------------------------------------------
// 2024 1�б� STL  ��910ȭ78        5�� 7�� ȭ����                            (10��2)
// 
// iterator: Iterators are a generalization of pointers
// --------------------------------------------------------------------------------

#include <iostream>

#include "String.h"
#include "save.h"

using namespace std;

extern bool ����;


int main() {
    String s { "1357924680" };

    // [����] ���� ������ ����ǰ� �϶�.
    for(char c : s) {
        cout << c << ' ';
    }
    cout << endl;

    //save("stl.cpp");
}
