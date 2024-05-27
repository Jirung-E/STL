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
#include <ranges>

#include "String.h"
#include "save.h"

using namespace std;

extern bool ����;


int main() {
    // [����] "�̻��� ������ �ٸ���.txt"������ �� �� �о
    // �ܾ�� ����Ƚ���� ����϶�.

    ifstream in { "�̻��� ������ �ٸ���.txt" };
    if(not in) {
        return 0;
    }

    map<String, int> Sim;
    String s;
    while(in >> s) {
        Sim[s]++;
    }

    for(const auto& [word, num] : Sim) {
        cout << word << " - " << num << endl;
    }

    cout << endl << endl;

    // [����] ���� ���� �ܾ� ������ ����϶�
    multimap<int, String> copy;
    for(const auto& [word, num] : Sim) {
        copy.insert(make_pair(num, word));
    }

    for(const auto& [num, word] : copy | views::reverse) {
        cout << word << " - " << num << endl;
    }

    //save("stl.cpp");
}
