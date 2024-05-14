// --------------------------------------------------------------------------------
// 2024 1�б� STL  ��910ȭ78        5�� 14�� ȭ����                           (11��2)
// 
// �˰��� �Լ��� �ݺ��ڸ� ���ڷ� �޴´�.
// 6�� 11�� ȭ����(15��2) - �⸻����
// --------------------------------------------------------------------------------

#include <iostream>
#include <vector>
#include <list>

#include "String.h"
#include "save.h"

using namespace std;

extern bool ����;


template <class SIter, class DIter>
void my_copy(SIter first, SIter end, DIter dest) {
    while(first != end) {
        *dest = *first;
        ++first;
        ++dest;
    }
}

int main() {
    //save("stl.cpp");

    String s { "20240514 �⸻���� 6�� 15�� 15�� 2��" };

    //my_copy(s.begin(), s.end(), ostream_iterator<char>{cout});


    vector<char> v(s.getLen());         // reserve�� ������ �ȵƴµ� �� �̰� �ɱ�
                                        // capacity�� �þ���� size�� �״��
                                        // v.end()�� v.begin()�� ���� ��ġ
                                        // -> for�� �ȵ���

    my_copy(s.begin(), s.end(), v.begin());

    for(char c : v) {
        cout << c;
    }
    cout << endl;


    list<char> l(s.getLen());

    my_copy(s.begin(), s.end(), l.begin());

    for(char c : l) {
        cout << c;
    }
    cout << endl;
}
