// --------------------------------------------------------------------------------
// 2024 1�б� STL  ��910ȭ78        4�� 9�� ȭ����                            (6��2)
// 
// 5�� 6�� ������ ���� ��
// 4�� 23�� ����
//
// vector - dynamic array
// --------------------------------------------------------------------------------

#include <iostream>
#include <vector>
#include <algorithm>

#include "String.h"
#include "save.h"

using namespace std;

extern bool ����;


int main() {
    // [����] Ű���忡�� �Է��� String�� ���̿������� �����Ͽ� ����϶�.

    //���� = true;

    vector<String> numbers { istream_iterator<String> { cin }, {} };

    sort(numbers.begin(), numbers.end(), [](const String& a, const String& b) {
        return a.getLen() < b.getLen();
    });

    for(const String& s : numbers) {
        cout << s << endl;
    }

    //save("stl.cpp");
}
