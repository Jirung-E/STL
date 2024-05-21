// --------------------------------------------------------------------------------
// 2024 1�б� STL  ��910ȭ78        5�� 21�� ȭ����                           (12��2)
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
#include <list>

#include "String.h"
#include "save.h"

using namespace std;

extern bool ����;


int main() {
    // �׷�� ���
    map<String, list<String>> m { 
        { "���̺�", { "������", "����", "����", "�����", "����", "�̼�" } }
    };

    m.insert(pair<String, list<String>> { 
        "����ũ", { "����", "����", "����", "����" }
    });
    
    m.insert(make_pair(
        "������", list<String> { "������" }
    ));

    m["��������"] = { "�����", "��ä��", "������", "ī����", "ȫ��ä" };

    // ��ü ���
    for(const auto& [group, members] : m) {
        cout << group << " - " << members.size() << "��" << endl;
        for(const String& member : members) {
            cout << member << ' ';
        }
        cout << endl << endl;
    }

    //save("stl.cpp");
}
