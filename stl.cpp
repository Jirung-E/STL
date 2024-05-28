// --------------------------------------------------------------------------------
// 2024 1�б� STL  ��910ȭ78        5�� 28�� ȭ����                           (13��2)
// 
// Unordered Associative container
// - unordered?
// - �޸� ����?
// - ���� ���� String�� ���� ����?
// 
// 6�� 11�� ȭ����(15��2) - �⸻����
// --------------------------------------------------------------------------------

#include <iostream>
#include <unordered_set>
#include <print>

#include "String.h"
#include "save.h"

using namespace std;

extern bool ����;


struct �ؽ� {
    size_t operator()(const String& s) const {
        // String s�� std::string���� ��ȯ
        // �׷��� std::string�� hash���� �˷��ִ� �Լ��� ����� �� �ִ�. 
        return hash<string>()({ s.begin(), s.end() });      // TODO: stringview�� �̿��غ���
    }
};


void print_us(const unordered_multiset<String, �ؽ�>& us) {
    for(int i=0; i<us.bucket_count(); ++i) {
        print("[{:3}] ", i);
        for(auto p=us.begin(i); p!=us.end(i); ++p) {
            cout << " - " << *p;
        }
        cout << endl;
    }
    cout << endl;
}


int main() {
    unordered_multiset<String, �ؽ�> us { "2024��", "5��", "28��", "����ִ�STL" };

    while(true) {
        cout << endl;
        print_us(us);
        cout << endl;

        cout << "�߰��� ������?: ";
        String s;
        cin >> s;
        us.insert(s);
    }

    //save("stl.cpp");
}
