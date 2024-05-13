// --------------------------------------------------------------------------------
// String.h     STL������ �����ϱ� ���� Ŭ����
// 
// 04.02 ����
// 04.15 noexcept: ������ ����Ű�� �ʴ°��� ������
// 04.16 operator==: logical equal
// 04.30 operator<
// 05.07 iterator, iterator adapter
// 05.13 String_Iterator�� ��¥ random_access �ݺ��ڰ� �ǵ��� �ڵ�
// --------------------------------------------------------------------------------

#pragma once

#include <memory>
#include <iostream>


// 05.07 iterator
class String_Iterator {
private:
    char* p;

public:
    using difference_type = ptrdiff_t;
    using value_type = char;
    using pointer = char*;
    using reference = char&;
    using iterator_category = std::random_access_iterator_tag;

    // C++17
    using iterator_concept = std::contiguous_iterator_tag;

public:
    String_Iterator(char* p) : p { p } {

    }

public:
    bool operator==(const String_Iterator& other) const {
        return p == other.p;
    }
    String_Iterator& operator++() {
        ++p;
        return *this;
    }

    // 05.13
    difference_type operator-(const String_Iterator& rhs) const {
        return p - rhs.p;
    }
    reference operator*() {
        return *p;
    }
    reference operator*() const {       // �̰� �����ε� �ȴ�.
        return *p;
    }
    String_Iterator& operator--() {
        --p;
        return *this;
    }
    String_Iterator operator+(difference_type d) const {
        return p + d;
    }
    bool operator<(const String_Iterator& rhs) const {
        return p < rhs.p;
    }
    String_Iterator operator-(difference_type d) const {
        return p - d;
    }
};

// ������ݺ��� - Iterator adaptor
class String_Reverse_Iterator {
private:
    char* p;

public:
    using difference_type = ptrdiff_t;
    using value_type = char;
    using pointer = char*;
    using reference = char&;
    using iterator_category = std::random_access_iterator_tag;

    // C++17
    using iterator_concept = std::contiguous_iterator_tag;

public:
    String_Reverse_Iterator(char* p) : p { p } {

    }

public:
    char operator*() const {
        return *(p-1);
    }
    bool operator==(const String_Reverse_Iterator& other) const {
        return p == other.p;
    }
    String_Reverse_Iterator& operator++() {
        --p;
        return *this;
    }
};


/////////////////////////////////////////////////////////////////////////////////


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

    // �̵������� �̵��Ҵ� - 04.02, 04.15
    String(String&& other) noexcept;
    String& operator=(String&& other) noexcept;

    // ������ �����ε� operator== - 04.16
    bool operator==(const String& rhs) const;

    // 04.30 <
    bool operator<(const String& rhs) const;

    using iterator = String_Iterator;
    using reverse_iterator = String_Reverse_Iterator;

    iterator begin() const;
    iterator end() const;

    reverse_iterator rbegin() const;
    reverse_iterator rend() const;

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