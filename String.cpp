// --------------------------------------------------------------------------------
// String.cpp     STL������ �����ϱ� ���� Ŭ����
// 
// 04.02 ����
// --------------------------------------------------------------------------------


#include "String.h"

using namespace std;


// ������ ���� �߰� - 04.02
bool ���� { false };





size_t String::uid { };


// ����Ʈ ������ - 04.02
String::String():
    len { 0 },
    id { ++uid }
{
    if(����)
        cout << "[" << id << "] - ����Ʈ����, ����: " << len << ", �ּ�: " << (void*)p.get() << endl;
}

String::String(const char* str):
    len { strlen(str) },
    id { ++uid }
{
    p = make_unique<char[]>(len);
    memcpy(p.get(), str, len);

    if(����)
        cout << "[" << id << "] - ����(char*), ����: " << len << ", �ּ�: " << (void*)p.get() << endl;
}

String::~String() {
    if(����)
        cout << "[" << id << "] - �Ҹ�, ����: " << len << ", �ּ�: " << (void*)p.get() << endl;
}

// ��������� �����Ҵ� - 04.02
String::String(const String& other): 
    len { other.len },
    id { ++uid }
{
    p = make_unique<char[]>(len);
    memcpy(p.get(), other.p.get(), len);

    if(����)
        cout << "[" << id << "] - �������, ����: " << len << ", �ּ�: " << (void*)p.get() << endl;
}

String& String::operator=(const String& rhs) {
    if(this != &rhs) {
        p.release();
        len = rhs.len;
        p = make_unique<char[]>(len);
        memcpy(p.get(), rhs.p.get(), len);
    
        if(����)
            cout << "[" << id << "] - �����Ҵ�, ����: " << len << ", �ּ�: " << (void*)p.get() << endl;
    }
    
    return *this;
}

String::String(String&& other) noexcept:
    len { other.len },
    id { ++uid }
{
    p.reset(other.p.release());

    if(����)
        cout << "[" << id << "] - �̵�����, ����: " << len << ", �ּ�: " << (void*)p.get() << endl;
}

String& String::operator=(String&& other) noexcept {
    if(this != &other) {
        p.reset();
        len = other.len;
        p.reset(other.p.release());

        if(����)
            cout << "[" << id << "] - �̵��Ҵ�, ����: " << len << ", �ּ�: " << (void*)p.get() << endl;
    }

    return *this;
}

///////////////////////////////////////////////////////////////////////////////////

size_t String::getLen() const {
    return len;
}

char* String::getMem() const {
    return p.get();
}
