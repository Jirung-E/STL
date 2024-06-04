// --------------------------------------------------------------------------------
// 2024 1�б� STL  ��910ȭ78        6�� 04�� ȭ����                           (14��2)
// 
// �ݺ��ڰ��� �Ÿ��� ��� distance�Լ��� �� �˾ƺ���.
// 
// 6�� 11�� ȭ����(15��2) - �⸻����
// --------------------------------------------------------------------------------

#include <iostream>

#include "String.h"
#include "save.h"

using namespace std;

extern bool ����;


template <class T>
concept ���ڸ� = is_integral_v<T> | is_floating_point_v<T>;

template <���ڸ� T>
T add(T a, T b) {
    return a + b;
}


int main() {
    // [����] �Լ� ���ø� add�� ����� �ּ���
    cout << add(1, 2) << endl;
    cout << add(1.1, 2.2) << endl;
    cout << add("2024��", "6�� 4��") << endl;

    //save("stl.cpp");
}
