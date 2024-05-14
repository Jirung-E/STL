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


template <class Iter, class Cond>
Iter my_find_if(Iter first, Iter last, Cond func) {
    for(Iter it=first; it<last; ++it) {
        if(func(*it)) {
            return it;
        }
    }
    return last;
}


int main() {
    //save("stl.cpp");

    String s { "stl algorithm - 2024�� 5�� 14��" };

    // [����] ����ڰ� ã�� ���ǿ� �´� ���ڰ� s�� �ִ��� �˷�����
    // ����: ���ڸ� ã�Ƽ� Ȧ������

    auto p = my_find_if(s.begin(), s.end(), [](char c) {
        if(isdigit(c)) {
            if(c & 1) {
                return true;
            }
        }
        return false;
    });

    if(p != s.end()) {
        cout << *p << "�� s�� " << distance(s.begin(), p) + 1 
            << "��° �����Դϴ�." << endl;
    }
    else {
        cout << "s�� ã������ ����." << endl;
    }
}
