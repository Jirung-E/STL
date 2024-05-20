// --------------------------------------------------------------------------------
// 2024 1�б� STL  ��910ȭ78        5�� 20�� ������                           (12��1)
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

#include "String.h"
#include "save.h"

using namespace std;

extern bool ����;


int main() {
    // [����] "�̻��� ������ �ٸ���.txt" ���Ͽ� �ִ� �ܾ set�� �о� �Ͷ�.
    set<String> s;

    ifstream in { "�̻��� ������ �ٸ���.txt" };
    if(!in) {
        return 0;
    }

    s = { istream_iterator<String>{in}, {} };

    cout << "unique�� �ܾ� - " << s.size() << endl;        // 2948
    for(const String& word : s) {
        cout << word << endl;
    }

    //save("stl.cpp");
}
