// --------------------------------------------------------------------------------
// 2024 1�б� STL  ��910ȭ78        6�� 03�� ������                           (14��1)
// 
// 
// 
// 6�� 11�� ȭ����(15��2) - �⸻����
// --------------------------------------------------------------------------------

#include <iostream>
#include <array>
#include <algorithm>
#include <numeric>
#include <random>
#include <print>
#include <thread>

#include "String.h"
#include "save.h"

using namespace std;

extern bool ����;


default_random_engine dre { random_device {}() };


int main() {
    string s { "STL - Container - Iterator - Algorithm      " };
    
    for(int i=0; i<10; ++i) {
        println("");
    }

    while(true) {
        print("{:^80}", s);
        rotate(s.begin(), s.begin()+1, s.end());
        cout << '\r';
        this_thread::sleep_for(100ms);
    }

    //save("stl.cpp");
}
