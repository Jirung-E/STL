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


    // [����] ã�� �ܾ �Ϻζ� ���Ե� �ܾ �ߺ� ���� ��� ����϶�.
    while(true) {
        cout << "ã�� �ܾ��? ";
        String word;
        cin >> word;

        set<String> copy { s.begin(), s.end() };
        for(const String& w : copy) {
            auto p = search(w.begin(), w.end(), word.begin(), word.end());
            if(p != w.end()) {
                cout << w << ' ';
            }
        }
        // �˻��� Ƚ���� �پ�� ���1���� �� ���ƺ��δ�

        cout << endl;
    }

    //save("stl.cpp");
}
