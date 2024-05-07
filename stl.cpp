// --------------------------------------------------------------------------------
// 2024 1�б� STL  ��910ȭ78        5�� 7�� ȭ����                            (10��2)
// 
// iterator: Iterators are a generalization of pointers
// --------------------------------------------------------------------------------

#include <iostream>
#include <span>

#include "String.h"
#include "save.h"

using namespace std;

extern bool ����;


int main() {
    String s { "1357924680" };
    span<char> sp { s.begin(), s.end() };

    // [����] �Ųٷ� ����϶�
    for(auto it=sp.rbegin(); it!=sp.rend(); ++it) {
        cout << *it << ' ';
    }
    cout << endl;

    save("stl.cpp");
}
