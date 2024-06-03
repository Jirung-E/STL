// --------------------------------------------------------------------------------
// 2024 1학기 STL  월910화78        6월 03일 월요일                           (14주1)
// 
// 
// 
// 6월 11일 화요일(15주2) - 기말시험
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

extern bool 관찰;


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
