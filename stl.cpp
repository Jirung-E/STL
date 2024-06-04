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


template<class Iter>
long long my_distance(Iter first, Iter last) {
    // ���������� �ݺ��ڶ��
    if(is_same_v<typename iterator_traits<Iter>::iterator_category,       // �̰� Ÿ���̸��̶�°� �˷��ֱ� ���� typenameŰ���带 ����.
        random_access_iterator_tag>) {
        //return last - first;
        return ��������(first, last, random_access_iterator_tag());         // tag dispatching
    }

    // �ƴ϶��
    long long step { };
    while(first != last) {
        ++first;
        ++step;
    }
    return step;
}


int main() {
    list<int> v { 1, 2, 3, 4, 5 };

    // distance�Լ��� �ݺ��ڰ��� �Ÿ��� ���.

    cout << my_distance(v.end(), v.begin());

    //save("stl.cpp");
}
