// --------------------------------------------------------------------------------
// 2024 1학기 STL  월910화78        5월 20일 월요일                           (12주1)
// 
// Associative Container - set 
// set은 unique한 key값을 정렬 상태로 유지한다.
// uniqueness는 equivalence 관계를 이용하여 결정한다.
// 
// 6월 11일 화요일(15주2) - 기말시험
// --------------------------------------------------------------------------------

#include <iostream>
#include <fstream>
#include <set>

#include "String.h"
#include "save.h"

using namespace std;

extern bool 관찰;


struct Lambda {
    bool operator()(const String& s1, const String& s2) const {
        return s1.getLen() < s2.getLen();
    }
};

bool compareLength(const String& s1, const String& s2) {    // predicate
    //return s1.getLen() < s2.getLen();
    if(s1.getLen() < s2.getLen()) {
        return true;
    }
    else if(s1.getLen() > s2.getLen()) {
        return false;
    }

    return s1 < s2;
}


int main() {
    // [문제] "이상한 나라의 앨리스.txt" 파일에 있는 단어를 set에 읽어 와라.
    // set은 단어길이기준 오름차순으로 정렬해야 한다.
    multiset<String, Lambda> s;

    ifstream in { "이상한 나라의 앨리스.txt" };
    if(!in) {
        return 0;
    }

    String temp;
    while(in >> temp) {
        s.insert(temp);
    }

    for(const String& word : s) {
        cout << word << endl;
    }
    cout << "읽은 단어 수 - " << s.size() << endl;        // 2948

    //save("stl.cpp");
}
