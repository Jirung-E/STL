// --------------------------------------------------------------------------------
// 2024 1�б� STL  ��910ȭ78        4�� 16�� ȭ����                            (7��2)
// 
// 5�� 6�� ������ ���� ��
// 4�� 23�� ����
// --------------------------------------------------------------------------------

#include <iostream>
#include <print>
#include <vector>
#include <numeric>

#include "String.h"
#include "save.h"

using namespace std;


int main() {
    vector<String> v { "1", "2", "3", "4", "5" };

    // [����] v���� "3"�� �����϶�.

    erase_if(v, [](const String& s) { return s == "3"; });
    
    for(const String& s : v) {
        cout << s << endl;
    }

    //save("stl.cpp");
}
