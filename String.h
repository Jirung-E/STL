// --------------------------------------------------------------------------------
// String.h     STL������ �����ϱ� ���� Ŭ����
// 
// 04.02 ����
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
    // ����Ʈ ������ - 04.02
    String();

    String(const char* str);

    // �Ҹ� ������ - 04.02
    ~String();

    // ��������� �����Ҵ� - 04.02
    String(const String& other);
    String& operator=(const String& rhs);

    // �̵������� �̵��Ҵ� - 04.02
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