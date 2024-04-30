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
    name1.merge(name2, [](const String& s1, const String& s2) {
        //return strcmp(s1.getMem(), s2.getMem());
        return s1.getLen() < s2.getLen();
    });

    for(const auto& s : name1) {
        cout << s << endl;
    }

    //save("stl.cpp");
}
