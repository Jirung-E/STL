// --------------------------------------------------------------------------------
// 2024 1�б� STL  ��910ȭ78        4�� 15�� ������                            (7��1)
// 
// 5�� 6�� ������ ���� ��
// 4�� 23�� ����
//
// vector - dynamic array
// --------------------------------------------------------------------------------

#include <iostream>
#include <fstream>
#include <vector>

#include "String.h"
#include "save.h"

using namespace std;

extern bool ����;


int main() {
    // [����] "stl.cpp"�� �ִ� ���ĺ� �ҹ����� ���� Ƚ���� ������ ���� ����϶�
    // a - 20
    // b - 3
    // c - 1
    // ...
    // z - 2

    ifstream in { "stl.cpp" };
    if(not in) {
        return 0;
    }

    vector<int> counts { };
    counts.resize('z'-'a'+1);

    char c;
    while(in >> c) {
        if(islower(c)) {
            ++counts[c-'a'];
        }
    }


    for(int i=0; i<counts.size(); ++i) {
        cout << char(i+'a') << " - " << counts[i] << endl;
    }

    //save("stl.cpp");
}
