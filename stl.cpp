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


    // [문제] 
    // 1. 찾는 단어가 있니? - y/n              --> contains
    // 2. 찾는 단어가 있으면 알려줘            --> find
    // 3. 찾는 단어가 있으면 몇 개나 있니?       --> count
    //    컴파일러와 무관하게 --> equal_range로 같은 일을 할 수 있다. operator==이 필요없다.
    while(true) {
        cout << "찾을 단어는? ";
        String word;
        cin >> word;

        // structured-binding을 이용하여 값을 받는다.
        auto [하한, 상한] = s.equal_range(word);    // [b, e) 
        if(하한 == 상한) {
            cout << word << " - 없는 단어" << endl;
        }
        else {
            cout << distance(하한, 상한) << "개" << endl;
        }
    }

    //save("stl.cpp");
}
