// --------------------------------------------------------------------------------
// 2024 1�б� STL  ��910ȭ78        4�� 1�� ������                            (5��1)
// 
// 5�� 6�� ������ ���� ��
// 4�� 23�� ����
// 
// 
// --------------------------------------------------------------------------------

#include <iostream>
#include <memory>

#include "save.h"

using namespace std;


class String {
    size_t len {};
    unique_ptr<char[]> str;

public:
    String(const char* str) : len { strlen(str) } {
        this->str = make_unique<char[]>(len);
        memcpy(this->str.get(), str, len);
    }

    friend ostream& operator<<(ostream& out, const String& s) {
        for(size_t i=0; i<s.len; ++i) {
            out << s.str.get()[i];
        }
        return out;
    }
};

//using String = string;


int main() {
    String s { "STL�� �����ϱ� ���� Ŭ���� �Դϴ�." };
    String t = s;

    cout << s << endl;
    cout << t << endl;

    //save("stl.cpp");
}