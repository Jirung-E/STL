// --------------------------------------------------------------------------------
// 2024 1학기 STL  월910화78        5월 21일 화요일                           (12주2)
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
#include <algorithm>

#include "String.h"
#include "save.h"

using namespace std;

extern bool 관찰;


int main() {
    // [문제] "이상한 나라의 앨리스.txt" 파일에 있는 단어를 multiset에 읽어 왔다.
    multiset<String> s;

    ifstream in { "이상한 나라의 앨리스.txt" };
    if(!in) {
        return 0;
    }

    String temp;
    while(in >> temp) {
        s.insert(temp);
    }

    cout << "읽은 단어 수 - " << s.size() << endl;        // 26626


    // [문제] 찾는 단어가 일부라도 포함된 단어를 중복 없이 모두 출력하라.
    while(true) {
        cout << "찾을 단어는? ";
        String word;
        cin >> word;

        set<String> copy { s.begin(), s.end() };
        for(const String& w : copy) {
            auto p = search(w.begin(), w.end(), word.begin(), word.end());
            if(p != w.end()) {
                cout << w << ' ';
            }
        }
        // 검색의 횟수가 줄어들어서 방법1보다 더 좋아보인다

        cout << endl;
    }

    //save("stl.cpp");
}
