#include <iostream>
#include <fstream>
#include <vector>
#include <algorithm>
#include <ranges>

#include "String.h"
#include "save.h"

using namespace std;

extern bool ����;


struct PS : pair<string, string> {
    PS(string s) : pair { s, s } {
        sort(first.begin(), first.end());
    }
};


int main() {
    ifstream in { "�ܾ��.txt" };
    if(not in) {
        cout << "������ �� �� �����ϴ�." << endl;
        return 0;
    }

    vector<PS> v;
    v.reserve(400000);

    string s;
    while(in >> s) {
        v.push_back(s);
    }
    cout << "�ܾ� ���� - " << v.size() << endl;

    ranges::sort(v, less<>{}, &PS::first);

    //cout << "��𼭺��� ����ұ��? ";
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
        cout << "ã�� �ܾ �Է��ϼ���: ";
        string s;
        cin >> s;

        PS word { s };

        auto range = ranges::equal_range(v, word.first, less<>{}, & PS::first);
        if(range.empty()) {
            cout << "ã�� �� �����ϴ�." << endl;
            continue;
        }

        cout << s << "�� anagram��" << endl;
        for(auto p : range) {
            cout << p.second << " ";
        }
        cout << endl;
        cout << endl;
    }
}
