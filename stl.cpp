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

#include "String.h"
#include "save.h"

using namespace std;

extern bool ����;


int main() {
    list<String> cont;

    ���� = true;

    // [����] "String.cpp"�� �ִ� �ܾ cont�� �����϶�.
    ifstream ifs { "String.cpp" };
    if(not ifs) {
        cout << "������ ���� ���߽��ϴ�." << endl;
        return 0;
    }

    String s;
    while(ifs >> s) {
        cont.emplace_back(s);       // �̷��� �ϸ� push_back�� �Ȱ��� ����
    }

    ���� = false;

    for(const auto& e : cont) {
        cout << e << endl;
    }

    //save("stl.cpp");
}
