// --------------------------------------------------------------------------------
// 2024 1�б� STL  ��910ȭ78        4�� 2�� ȭ����                            (5��2)
// 
// 5�� 6�� ������ ���� ��
// 4�� 23�� ����
// 
// 
// --------------------------------------------------------------------------------

#include <iostream>
#include <array>
#include <algorithm>

#include "String.h"
#include "save.h"

using namespace std;

extern bool ����;


int main() {
    array<String, 5> a { 
        "jfdkl;fjdskajfkdsl",
        "jetufivonmk,34fjdkbvv8909a",
        "",
        "dkssud dhk toswm dktlsmsrnsk",
        "rjq.sk.dj.fuq.tmq.sl.ek."
    };

    //sort(a.begin(), a.end(), [](const String& a, const String& b) { 
    //    return a.getLen() < b.getLen(); 
    //});
    
    // [����] sort�� ����Ͽ� a�� �����ϴ� String�� ������������ ������ �� ����϶�

    for(const String& s : a) {
        auto start = s.getMem();
        sort(start, start + s.getLen());
        //sort(start, start + s.getLen(), [](char a, char b) {
        //    return a > b;
        //});
    }
    
    for(const String& s : a) {
        cout << s << endl;
    }

    save("stl.cpp");
}
