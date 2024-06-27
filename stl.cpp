#include <iostream>
#include <fstream>
#include <vector>
#include <list>
#include <algorithm>
#include <ranges>

#include "String.h"
#include "save.h"

using namespace std;

extern bool 관찰;


struct PS : pair<string, string> {
    PS(string s) : pair { s, s } {
        sort(first.begin(), first.end());
    }
};


int main() {
    ifstream in { "단어들.txt" };
    if(not in) {
        cout << "파일을 열 수 없습니다." << endl;
        return 0;
    }

    vector<PS> v;
    v.reserve(400000);

    string s;
    while(in >> s) {
        v.push_back(s);
    }
    cout << "단어 개수 - " << v.size() << endl;

    ranges::sort(v, less<>{}, &PS::first);


    // 전체 anagram쌍을 컨테이너에 저장
    vector<list<string>> anagrams;

    auto it = v.begin();
    int cnt { };
    while(true) {
        it = adjacent_find(it, v.end(), [](const auto& a, const auto& b) {
            return a.first == b.first;
        });

        if(it == v.end()) break;

        auto last = find_if_not(it+1, v.end(), [it](const auto& a) {
            return it->first == a.first;
        });

        list<string> con;
        for_each(it, last, [&con](const auto& p) {
            con.push_back(p.second);
        });
        anagrams.push_back(con);

        it = last;
    }

    cout << "모두 " << anagrams.size() << "개의 anagram쌍을 찾았습니다." << endl;
}
