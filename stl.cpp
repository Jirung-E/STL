// --------------------------------------------------------------------------------
// 2024 1�б� STL  ��910ȭ78        5�� 14�� ȭ����                           (11��2)
// 
// �˰��� �Լ��� �ݺ��ڸ� ���ڷ� �޴´�.
// 6�� 11�� ȭ����(15��2) - �⸻����
// --------------------------------------------------------------------------------

#include <iostream>

#include "String.h"
#include "save.h"

using namespace std;

extern bool ����;


template <class Iter, class Val>
Iter my_find(Iter first, Iter last, Val val) {
    for(Iter it=first; it<last; ++it) {
        if(*it == val) {
            return it;
        }
    }
    return last;
}


int main() {
    //save("stl.cpp");

    String s { "20240513 - stl container iterator algorithm" };

    // [����] ����ڰ� ã�� ���ڰ� s�� �ִ��� �˷�����

    while(true) {
        cout << "ã�� ���ڴ�? ";
        char ch;
        cin >> ch;

        auto p = my_find(s.begin(), s.end(), ch);
        if(p != s.end()) {
            cout << ch << "�� s�� " << distance(s.begin(), p) + 1 
                << "��° �����Դϴ�." << endl;
        }
        else {
            cout << ch << "�� s�� ���� �����Դϴ�." << endl;
        }
    }
}
