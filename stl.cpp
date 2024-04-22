// --------------------------------------------------------------------------------
// 2024 1�б� STL  ��910ȭ78        4�� 22�� ������                            (8��1)
// 
// 5�� 6�� ������ ���� ��
// 4�� 23�� ����
// 
// list
// --------------------------------------------------------------------------------

#include <iostream>
#include <fstream>
#include <list>
#include <algorithm>

#include "String.h"
#include "save.h"

using namespace std;

extern bool ����;


int main() {
    list<String> cont;

    // [����] "String.cpp"�� �ִ� �ܾ cont�� �����϶�.
    ifstream ifs { "String.cpp" };
    if(not ifs) {
        cout << "������ ���� ���߽��ϴ�." << endl;
        return 0;
    }

    cont = { istream_iterator<String>{ifs}, {} };

    ���� = true;

    // [����] ���� ������������ ����
    cont.sort([](const String& s1, const String& s2) {
        return s1.getLen() < s2.getLen();
    });

    // ������
    cont.reverse();

    ���� = false;

    cout << endl;

    // ����� �Ųٷ� �ϰ� �ʹ�
    for(auto p=cont.rbegin(); p!= cont.rend(); ++p) {
        cout << *p << endl;
    }

    save("stl.cpp");
}
