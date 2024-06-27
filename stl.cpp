#include <iostream>
#include <fstream>
#include <vector>
#include <algorithm>
#include <ranges>

#include "String.h"
#include "save.h"

using namespace std;

extern bool 관찰;


int main() {
    ifstream in { "단어들.txt" };
    if(not in) {
        cout << "파일을 열 수 없습니다." << endl;
        return 0;
    }

    vector<string> v;
    v.reserve(100000);

    copy(istream_iterator<string> { in }, {}, back_inserter(v));
    cout << "단어 개수: " << v.size() << endl;      // 369882개

    cout << "정렬되어있나요? " << boolalpha << is_sorted(v.begin(), v.end()) << endl;      // true

    auto p = unique(v.begin(), v.end());
    if(p == v.end()) {
        cout << "중복된 단어가 없습니다." << endl;        // .
    }
    else {
        cout << "중복된 단어가 있습니다." << endl;
    }

    // 길이가 가장 긴 단어
    auto long_p = max_element(v.begin(), v.end(), [](const string& a, const string& b) {
        return a.size() < b.size();
    });

    cout << "size: " << long_p->size() << endl;
    cout << "longest word: " << *long_p << endl;

    // 원하는 길이의 단어 출력
    cout << "원하는 단어 길이: ";
    int word_len;
    cin >> word_len;

    for(const string& s : v 
        | views::filter([](const string& s) { return s[0] == 'c'; })
        | views::filter([word_len](const string& s) { return s.size() == word_len; })                    
        | views::take(10)
    ) {
        cout << s << endl;
    }

    // 사용자가 입력한 단어가 사전에 있는지?
    // 있다면 anagram출력

    cout << endl; 

    cout << "======================================" << endl;
    cout << "        anagram 찾기 프로그램          " << endl;
    cout << "======================================" << endl;

    cout << endl;

    while(true) {
        cout << "찾을 단어를 입력하세요: ";
        string to_find;
        cin >> to_find;

        if(not binary_search(v.begin(), v.end(), to_find)) {
            cout << "사전에 없는 단어입니다." << endl << endl;
            continue;
        }

        cout << "가능한 조합의 개수: ";
        long long int p_num = 1;
        for(int i=0; i<to_find.size(); ++i) {
            p_num *= i+1;
        }
        cout << p_num << endl << endl;

        int dict[26] = {0, };
        for(char ch : to_find) {
            dict[ch - 'a']++;
        }

        for(const string& s : v) {
            int d[26] = {0, };
            for(char ch : s) {
                d[ch - 'a']++;
            }

            bool is_anagram = true;
            for(int i=0; i<26; ++i) {
                if(dict[i] != d[i]) {
                    is_anagram = false;
                    break;
                }
            }

            if(is_anagram) {
                cout << s << " ";
            }
        }

        //string word = to_find;
        //sort(word.begin(), word.end());

        //do {
        //    if(binary_search(v.begin(), v.end(), word)) {
        //        cout << word << " ";
        //    }
        //} while(next_permutation(word.begin(), word.end()));

        cout << endl;
        cout << endl;
    }
}
