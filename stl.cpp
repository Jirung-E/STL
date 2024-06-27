#include <iostream>
#include <fstream>
#include <vector>
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

    //cout << "어디서부터 출력할까요? ";
    //int num;
    //cin >> num;

    //for(auto& [a, b] : v 
    //    | views::drop(num)
    //    | views::filter([](const auto& p) { return p.first.size() == 8; })
    //    | views::take(100)
    //) {
    //    cout << a << " - " << b << endl;
    //}

    while(true) {
        cout << "찾을 단어를 입력하세요: ";
        string s;
        cin >> s;

        PS word { s };

        auto range = ranges::equal_range(v, word.first, less<>{}, & PS::first);
        if(range.empty()) {
            cout << "찾을 수 없습니다." << endl;
            continue;
        }

        cout << s << "의 anagram들" << endl;
        for(auto p : range) {
            cout << p.second << " ";
        }
        cout << endl;
        cout << endl;
    }
}
