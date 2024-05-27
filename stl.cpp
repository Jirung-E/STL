// --------------------------------------------------------------------------------
// 2024 1학기 STL  월910화78        5월 27일 월요일                           (13주1)
// 
// Unordered Associative container
// - unordered?
// - 메모리 구조?
// - 내가 만든 String도 관리 가능?
// 
// 6월 11일 화요일(15주2) - 기말시험
// --------------------------------------------------------------------------------

#include <iostream>
#include <unordered_set>

#include "String.h"
#include "save.h"

using namespace std;

extern bool 관찰;


int main() {
    unordered_set<int> us { 3, 1, 4, 2 };

    us.insert(7);
    us.insert(10);

    for(int n : us) {
        cout << n << ' ';
    }
    cout << endl;

    //save("stl.cpp");
}
