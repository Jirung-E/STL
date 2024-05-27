// --------------------------------------------------------------------------------
// 2024 1�б� STL  ��910ȭ78        5�� 27�� ������                           (13��1)
// 
// Associative Container - map -> dictionary
// 
// map -> �����迭(�ε����� int�� �ƴ� �迭)ó�� ����� �� �ִ�. 
// 
// 6�� 11�� ȭ����(15��2) - �⸻����
// --------------------------------------------------------------------------------

#include <iostream>
#include <fstream>
#include <map>
#include <algorithm>

#include "String.h"
#include "save.h"

using namespace std;

extern bool ����;


int main() {
    // [����] "�̻��� ������ �ٸ���.txt"������ �� �� �о
    // �ҹ��ڿ� ���� Ƚ���� ������ ���� �������� ����϶�
    // a - 314
    // b - 216
    // ...
    // z - 10

    ifstream in { "�̻��� ������ �ٸ���.txt" };
    if(not in) {
        return 0;
    }

    map<char, int> m;
    char c;
    while(in >> c) {
        if(isalpha(c)) {
            m[tolower(c)]++;
        }
    }

    for(const auto& [alpha, num] : m) {
        cout << alpha << " - " << num << endl;
    }

    cout << endl << endl;

    // [����] ���� ������������ ����϶�.
    map<int, char> icm;

    for(const auto& [alpha, num] : m) {
        icm[num] = alpha;
    }

    for(auto it=icm.rbegin(); it!=icm.rend(); ++it) {
        cout << it->second << " - " << it->first << endl;
    }

    //save("stl.cpp");
}
