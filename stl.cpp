// --------------------------------------------------------------------------------
// 2024 1�б� STL  ��910ȭ78        6�� 10�� ������                           (15��1)
// 
// 
// 
// 6�� 11�� ȭ����(15��2) - �⸻����
// --------------------------------------------------------------------------------

#include <iostream>
#include <ranges>
#include <print>

#include "String.h"
#include "save.h"

using namespace std;

extern bool ����;


int main() {
    // 10'0000���� ū �Ҽ�(prime number) 100���� ����϶�
    auto �Ҽ� = [](int n) {
        if(n <= 1) {
            return false;
        }

        for(int i=2; i<= int(sqrt(double(n))); ++i) {
            if(0 == n % i) {
                return false;
            }
        }

        return true;
    };

    for(int num : views::iota(10'0000) 
        | views::filter(�Ҽ�) 
        | views::take(10000)
        | views::reverse
        ) {
        print("{} ", num);
    }
    cout << endl << endl;

    //save("stl.cpp");
}
