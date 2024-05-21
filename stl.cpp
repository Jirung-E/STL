// --------------------------------------------------------------------------------
// 2024 1�б� STL  ��910ȭ78        5�� 21�� ȭ����                           (12��2)
// 
// Associative Container - set 
// set�� unique�� key���� ���� ���·� �����Ѵ�.
// uniqueness�� equivalence ���踦 �̿��Ͽ� �����Ѵ�.
// 
// 6�� 11�� ȭ����(15��2) - �⸻����
// --------------------------------------------------------------------------------

#include <iostream>
#include <fstream>
#include <set>
#include <algorithm>

#include "String.h"
#include "save.h"

using namespace std;

extern bool ����;


int main() {
    // [����] "�̻��� ������ �ٸ���.txt" ���Ͽ� �ִ� �ܾ multiset�� �о� �Դ�.
    multiset<String> s;

    ifstream in { "�̻��� ������ �ٸ���.txt" };
    if(!in) {
        return 0;
    }

    String temp;
    while(in >> temp) {
        s.insert(temp);
    }

    cout << "���� �ܾ� �� - " << s.size() << endl;        // 26626


    // [����] 
    // 1. ã�� �ܾ �ִ�? - y/n              --> contains
    // 2. ã�� �ܾ ������ �˷���            --> find
    // 3. ã�� �ܾ ������ �� ���� �ִ�?       --> count
    //    �����Ϸ��� �����ϰ� --> equal_range�� ���� ���� �� �� �ִ�. operator==�� �ʿ����.
    while(true) {
        cout << "ã�� �ܾ��? ";
        String word;
        cin >> word;

        // structured-binding�� �̿��Ͽ� ���� �޴´�.
        auto [����, ����] = s.equal_range(word);    // [b, e) 
        if(���� == ����) {
            cout << word << " - ���� �ܾ�" << endl;
        }
        else {
            cout << distance(����, ����) << "��" << endl;
        }
    }

    //save("stl.cpp");
}
