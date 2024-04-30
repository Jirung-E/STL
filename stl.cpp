// --------------------------------------------------------------------------------
// 2024 1�б� STL  ��910ȭ78        4�� 30�� ������                            (9��1)
// 
// 5�� 6�� ������ ���� ��
// 
// list
// --------------------------------------------------------------------------------

#include <iostream>
#include <list>

#include "String.h"
#include "save.h"

using namespace std;

extern bool ����;


int main() {
    list<String> name1 { "����", "����", "�̼�", "����", "����" };
    list<String> name2 { "����", "����", "�ÿ�", "����", "����", "����" };

    // [����] ����Ʈ 2���� �ϳ��� ���� �ּ���.
    name1.merge(name2);

    for(const auto& s : name1) {
        cout << s << endl;
    }

    cout << endl;
    cout << "�������� ���� ����Ʈ" << endl;
    for(const auto& s : name2) {
        cout << s << endl;
    }

    //save("stl.cpp");
}
