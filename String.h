// --------------------------------------------------------------------------------
// String.h     STL동작을 관찰하기 위한 클래스
// 
// 04.02 시작
// --------------------------------------------------------------------------------

#pragma once

#include <memory>
#include <iostream>


class String {
    size_t len {};
    std::unique_ptr<char[]> p;
    size_t id;

    static size_t uid;

public:
    // 디폴트 생성자 - 04.02
    String();

    String(const char* str);

    // 소멸 관찰용 - 04.02
    ~String();

    // 복사생성과 복사할당 - 04.02
    String(const String& other);
    String& operator=(const String& rhs);

    // 이동생성과 이동할당 - 04.02
    String(String&& other) noexcept;
    String& operator=(String&& other) noexcept;

public:
    size_t getLen() const;
    char* getMem() const;

public:
    friend std::ostream& operator<<(std::ostream& out, const String& s) {
        for(size_t i=0; i<s.len; ++i) {
            out << s.p.get()[i];
        }
        return out;
    }

    // 04.09
    friend std::istream& operator>>(std::istream& in, String& s);
};