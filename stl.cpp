#include <iostream>
#include <fstream>
#include <vector>
#include <algorithm>
#include <ranges>

#include "String.h"
#include "save.h"

using namespace std;

extern bool ����;


int main() {
    ifstream in { "�ܾ��.txt" };
    if(not in) {
        cout << "������ �� �� �����ϴ�." << endl;
        return 0;
    }

    vector<string> v;
    v.reserve(100000);

    copy(istream_iterator<string> { in }, {}, back_inserter(v));
    cout << "�ܾ� ����: " << v.size() << endl;      // 369882��

    cout << "���ĵǾ��ֳ���? " << boolalpha << is_sorted(v.begin(), v.end()) << endl;      // true

    auto p = unique(v.begin(), v.end());
    if(p == v.end()) {
        cout << "�ߺ��� �ܾ �����ϴ�." << endl;        // .
    }
    else {
        cout << "�ߺ��� �ܾ �ֽ��ϴ�." << endl;
    }

    // ���̰� ���� �� �ܾ�
    auto long_p = max_element(v.begin(), v.end(), [](const string& a, const string& b) {
        return a.size() < b.size();
    });

    cout << "size: " << long_p->size() << endl;
    cout << "longest word: " << *long_p << endl;

    // ���ϴ� ������ �ܾ� ���
    cout << "���ϴ� �ܾ� ����: ";
    int word_len;
    cin >> word_len;

    for(const string& s : v 
        | views::filter([](const string& s) { return s[0] == 'c'; })
        | views::filter([word_len](const string& s) { return s.size() == word_len; })                    
        | views::take(10)
    ) {
        cout << s << endl;
    }

    // ����ڰ� �Է��� �ܾ ������ �ִ���?
    // �ִٸ� anagram���

    cout << endl; 

    cout << "======================================" << endl;
    cout << "        anagram ã�� ���α׷�          " << endl;
    cout << "======================================" << endl;

    cout << endl;

    while(true) {
        cout << "ã�� �ܾ �Է��ϼ���: ";
        string to_find;
        cin >> to_find;

        if(not binary_search(v.begin(), v.end(), to_find)) {
            cout << "������ ���� �ܾ��Դϴ�." << endl << endl;
            continue;
        }

        cout << "������ ������ ����: ";
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
