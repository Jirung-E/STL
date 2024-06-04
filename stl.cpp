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
    // C++17���ʹ� constexpr if�� ������ �ҽ��ڵ� Ȯ�� ����
    if constexpr(is_same_v<typename iterator_traits<Iter>::iterator_category,
        random_access_iterator_tag>) {
        return last - first;
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
    vector<int> v { 1, 2, 3, 4, 5 };
    list<int> l { 1, 2, 3, 4, 5 };

    // distance�Լ��� �ݺ��ڰ��� �Ÿ��� ���.

    cout << my_distance(v.end(), v.begin()) << endl;
    cout << my_distance(l.end(), l.begin()) << endl;

    //save("stl.cpp");
}
