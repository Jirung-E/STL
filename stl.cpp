// --------------------------------------------------------------------------------
// 2024 1�б� STL  ��910ȭ78        5�� 13�� ������                            (11��1)
// 
// �˰��� �Լ��� �ݺ��ڸ� ���ڷ� �޴´�.
// --------------------------------------------------------------------------------

#include <iostream>

#include "String.h"
#include "save.h"

using namespace std;

extern bool ����;


template <class Iter, class Val>
Iter my_find(Iter first, Iter last, Val val) {

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
            cout << "��ġ - " << "�� ã��" << endl;
        }
        else {
            cout << ch << "�� s�� ���� �����Դϴ�." << endl;
        }
    }
}
