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


// ����° ���ڴ� callable type�ε� �� �߿��� boolean���� �����ϴ� ���� 
// Ư���� predicate�̶�� �θ���(������, ������, �Ǵ���)
template <class Iter, class Cond>
Iter my_find_if(Iter first, Iter last, Cond func) {
    while(last != first) {
        if(func(*first)) {
            return first;
        }
        ++first;
    }
    return last;
}


int main() {
    //save("stl.cpp");

    String s { "stl algorithm - 2024�� 5�� 14��" };

    // [����] ����ڰ� ã�� ���ǿ� �´� ���ڰ� s�� �ִ��� �˷�����
    // ����: ���ڸ� ã�Ƽ� Ȧ������

    auto p = my_find_if(s.begin(), s.end(), [](int a) -> float { return 0.1f; });

    if(p != s.end()) {
        cout << *p << "�� s�� " << distance(s.begin(), p) + 1 
            << "��° �����Դϴ�." << endl;
    }
    else {
        cout << "s�� ã������ ����." << endl;
    }
}
