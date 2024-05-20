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


struct Lambda {
    bool operator()(const String& s1, const String& s2) const {
        return s1.getLen() < s2.getLen();
    }
};

bool compareLength(const String& s1, const String& s2) {    // predicate
    //return s1.getLen() < s2.getLen();
    if(s1.getLen() < s2.getLen()) {
        return true;
    }
    else if(s1.getLen() > s2.getLen()) {
        return false;
    }

    return s1 < s2;
}


int main() {
    // [����] "�̻��� ������ �ٸ���.txt" ���Ͽ� �ִ� �ܾ set�� �о� �Ͷ�.
    // set�� �ܾ���̱��� ������������ �����ؾ� �Ѵ�.
    multiset<String, Lambda> s;

    ifstream in { "�̻��� ������ �ٸ���.txt" };
    if(!in) {
        return 0;
    }

    String temp;
    while(in >> temp) {
        s.insert(temp);
    }

    for(const String& word : s) {
        cout << word << endl;
    }
    cout << "���� �ܾ� �� - " << s.size() << endl;        // 2948

    //save("stl.cpp");
}
