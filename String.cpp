// --------------------------------------------------------------------------------
// String.cpp     STL동작을 관찰하기 위한 클래스
// 
// 04.02 시작
// --------------------------------------------------------------------------------


#include "String.h"

using namespace std;


// 관찰용 변수 추가 - 04.02
bool 관찰 { false };





size_t String::uid { };


// 디폴트 생성자 - 04.02
String::String():
    len { 0 },
    id { ++uid }
{
    if(관찰)
        cout << "[" << id << "] - 디폴트생성, 길이: " << len << ", 주소: " << (void*)p.get() << endl;
}

String::String(const char* str):
    len { strlen(str) },
    id { ++uid }
{
    p = make_unique<char[]>(len);
    memcpy(p.get(), str, len);

    if(관찰)
        cout << "[" << id << "] - 생성(char*), 길이: " << len << ", 주소: " << (void*)p.get() << endl;
}

String::~String() {
    if(관찰)
        cout << "[" << id << "] - 소멸, 길이: " << len << ", 주소: " << (void*)p.get() << endl;
}

// 복사생성과 복사할당 - 04.02
String::String(const String& other): 
    len { other.len },
    id { ++uid }
{
    p = make_unique<char[]>(len);
    memcpy(p.get(), other.p.get(), len);

    if(관찰)
        cout << "[" << id << "] - 복사생성, 길이: " << len << ", 주소: " << (void*)p.get() << endl;
}

String& String::operator=(const String& rhs) {
    if(this != &rhs) {
        p.release();
        len = rhs.len;
        p = make_unique<char[]>(len);
        memcpy(p.get(), rhs.p.get(), len);
    
        if(관찰)
            cout << "[" << id << "] - 복사할당, 길이: " << len << ", 주소: " << (void*)p.get() << endl;
    }
    
    return *this;
}

String::String(String&& other) noexcept:
    len { other.len },
    id { ++uid }
{
    p.reset(other.p.release());

    if(관찰)
        cout << "[" << id << "] - 이동생성, 길이: " << len << ", 주소: " << (void*)p.get() << endl;
}

String& String::operator=(String&& other) noexcept {
    if(this != &other) {
        p.reset();
        len = other.len;
        p.reset(other.p.release());

        if(관찰)
            cout << "[" << id << "] - 이동할당, 길이: " << len << ", 주소: " << (void*)p.get() << endl;
    }

    return *this;
}

///////////////////////////////////////////////////////////////////////////////////

size_t String::getLen() const {
    return len;
}

char* String::data() const {
    return p.get();
}
