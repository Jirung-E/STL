// --------------------------------------------------------------------------------
// 2024 1�б� STL  ��910ȭ78        6�� 03�� ������                           (14��1)
// 
// 
// 
// 6�� 11�� ȭ����(15��2) - �⸻����
// --------------------------------------------------------------------------------

#include <iostream>
#include <array>
#include <algorithm>

#include "String.h"
#include "save.h"

using namespace std;

extern bool ����;


template <class Iter, class Pred>
bool my_all_of(const Iter& first, const Iter& last, Pred pred) {
    for(auto it=first; it!=last; ++it) {
        if(!pred(*it)) {
            return false;
        }
    }
    return true;
}


int main() {
    array<int, 5> a { 1, 3, 5, 7, 9 };

    // [����] a�� ���Ұ� ��� Ȧ���ΰ�? �˻��ϰ� ����϶�.
    
    bool is_odd = my_all_of(a.begin(), a.end(), [](int n) {
        return n & 1;
    });

    if(is_odd) {
        cout << "��� Ȧ��" << endl;
    }
    else {
        cout << "��ΰ� Ȧ���ΰ��� �ƴϴ�." << endl;
    }

    //save("stl.cpp");
}
