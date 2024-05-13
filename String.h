// --------------------------------------------------------------------------------
// String.h     STL동작을 관찰하기 위한 클래스
// 
// 04.02 시작
// 04.15 noexcept: 에러를 일으키지 않는것을 보장함
// 04.16 operator==: logical equal
// 04.30 operator<
// 05.07 iterator, iterator adapter
// 05.13 String_Iterator가 진짜 random_access 반복자가 되도록 코딩
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
    reference operator*() const {       // 이거 오버로딩 된다.
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

// 역방향반복자 - Iterator adaptor
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
    // 디폴트 생성자 - 04.02
    String();

    String(const char* str);

    // 소멸 관찰용 - 04.02
    ~String();

    // 복사생성과 복사할당 - 04.02
    String(const String& other);
    String& operator=(const String& rhs);

    // 이동생성과 이동할당 - 04.02, 04.15
    String(String&& other) noexcept;
    String& operator=(String&& other) noexcept;

    // 연산자 오버로딩 operator== - 04.16
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