// --------------------------------------------------------------------------------
// 2024 1�б� STL  ��910ȭ78        4�� 16�� ȭ����                            (7��2)
// 
// 5�� 6�� ������ ���� ��
// 4�� 23�� ����
// 
// deque - vector�� list�� �߰����¸� ��� �ڷᱸ��(stl����)
// --------------------------------------------------------------------------------

#include <iostream>
#include <deque>
#include <vector>
#include <list>

#include "String.h"
#include "save.h"

using namespace std;

extern bool ����;


class Test {
    char x[4096];
};


int main() {
    //vector<Test> v;     // 2362204
    deque<Test> v;        // 46~~~~~
    //list<Test> v;       // ??

    while(true) {
        try {
            v.push_back(Test {});
        }
        catch(...) {
            cout << endl << endl;
            cout << "�������" << endl;
            cout << v.size() << endl;
            break;
        }
    }

    //save("stl.cpp");
}
