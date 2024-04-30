// --------------------------------------------------------------------------------
// 2024 1�б� STL  ��910ȭ78        4�� 30�� ������                            (9��1)
// 
// 5�� 6�� ������ ���� ��
// 
// list
// --------------------------------------------------------------------------------

#include <iostream>
#include <fstream>
#include <list>

#include "String.h"
#include "save.h"

using namespace std;

extern bool ����;


int main() {
    // [����] "stl.cpp"�� �ҹ��ڸ� list<char>�� push_back()���� �����϶�.
    ifstream in { "stl.cpp" };
    if(not in) {
        return 0;
    }

    list<char> charlist;
    
    char c;
    while(in >> c) {
        if(islower(c)) {
            charlist.push_back(c);
        }
    }

    // ����϶�.
    for(char c : charlist) {
        cout << c;
    }
    cout << endl;

    // ��� �ҹ��ڰ� �� �ֳ� Ȯ���϶�.
    charlist.sort();
    cout << charlist.unique() << endl;
    for(char c : charlist) {
        cout << c;
    }
    cout << endl;
    cout << charlist.size() << endl;
    if(charlist.size() == 'z'-'a'+1) {
        cout << "���ִ�" << endl;
    }
    else {
        cout << "���ڶ�" << endl;
    }

    //save("stl.cpp");
}
