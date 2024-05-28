// --------------------------------------------------------------------------------
// 2024 1학기 STL  월910화78        5월 28일 화요일                           (13주2)
// 
// 컨테이너의 찾기 성능 비교
// 0. vector                걸린시간 - 111034ms     100000에서 63170개를 찾음
// 1. vector(sorted)        걸린시간 - 53ms         100000에서 63170개를 찾음
// 2. set                   걸린시간 - 228ms        100000에서 63170개를 찾음
// 3. unordered_set         걸린시간 - 6ms          100000에서 63170개를 찾음
// 
// 6월 11일 화요일(15주2) - 기말시험
// --------------------------------------------------------------------------------

#include <iostream>
#include <array>
#include <vector>
#include <set>
#include <unordered_set>
#include <algorithm>
#include <random>
#include <chrono>

#include "String.h"
#include "save.h"

using namespace std;

extern bool 관찰;


const int NUM = 1000'0000;
const int FNUM =  10'0000;

array<int, NUM> a;
array<int, FNUM> fa;

default_random_engine dre;
uniform_int_distribution uid { 1, NUM };


int main() {
    for(int& num : a) {
        num = uid(dre);
    }

    for(int& num : fa) {
        num = uid(dre);
    }

    {
        // 정렬한 벡터에서 찾기
        cout << "정렬한 벡터 준비중...";
        vector<int> v;
        v.reserve(NUM);
        v = { a.begin(), a.end() };
        sort(v.begin(), v.end());
        cout << endl;

        int cnt { };

        auto start = chrono::high_resolution_clock::now();

        for(int num : fa) {
            bool b = binary_search(v.begin(), v.end(), num);
            if(b) {
                ++cnt;
            }
        }

        auto end = chrono::high_resolution_clock::now();

        auto elapsed = end - start;
        auto et = chrono::duration_cast<chrono::milliseconds>(elapsed);
        cout << "걸린시간 - "<< et << endl;

        cout << FNUM << "에서 " << cnt << "개를 찾음" << endl;
    }

    cout << endl;

    {
        // 멀티셋에서 찾기
        cout << "멀티셋 준비중...";
        multiset<int> s { a.begin(), a.end() };
        cout << endl;

        int cnt { };

        auto start = chrono::high_resolution_clock::now();

        for(int num : fa) {
            bool b = s.contains(num);
            if(b) {
                ++cnt;
            }
        }

        auto end = chrono::high_resolution_clock::now();

        auto elapsed = end - start;
        auto et = chrono::duration_cast<chrono::milliseconds>(elapsed);
        cout << "걸린시간 - "<< et << endl;

        cout << FNUM << "에서 " << cnt << "개를 찾음" << endl;
    }

    cout << endl;

    {
        // unordered멀티셋에서 찾기
        cout << "unordered멀티셋 준비중...";
        unordered_multiset<int> s;
        s.reserve(NUM);
        s = { a.begin(), a.end() };
        cout << endl;

        int cnt { };

        auto start = chrono::high_resolution_clock::now();

        for(int num : fa) {
            bool b = s.contains(num);
            if(b) {
                ++cnt;
            }
        }

        auto end = chrono::high_resolution_clock::now();

        auto elapsed = end - start;
        auto et = chrono::duration_cast<chrono::milliseconds>(elapsed);
        cout << "걸린시간 - "<< et << endl;

        cout << FNUM << "에서 " << cnt << "개를 찾음" << endl;
    }

    //save("stl.cpp");
}
