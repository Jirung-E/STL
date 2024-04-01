// --------------------------------------------------------------------------------
// 2024 1학기 STL  월910화78        4월 1일 월요일                            (5주1)
// 
// 5월 6일 월요일 강의 함
// 4월 23일 시험
// 
// callable type - 무한한 타입이 있다.
// sort할때 어떤 기준으로 정렬할지를 어떻게 sort함수에게 알려주나?
// 1. 함수 포인터를 전달한다.
// 2. 람다를 전달한다.
// 3. ()연산자(function call operator)를 오버로딩한 클래스의 객체
// --------------------------------------------------------------------------------

#include <iostream>
#include <print>
#include <random>
#include <array>

#include "save.h"

using namespace std;


// [문제] [1, 1'000]범위의 값을 갖는 int 100개를 만들어 주세요.
// std::sort를 사용하여 오름차순으로 정렬하세요.
// 정렬한 결과를 화면에 보여주세요.  

uniform_int_distribution uid { 1, 1'000 };
default_random_engine dre;

array<int, 100> a;

class Dog {
public:
    bool operator()(int a, int b) {
        return a > b;
    }
};


int main() {
    generate(a.begin(), a.end(), []() { return uid(dre); });

    println("generated");
    for(int num : a) {
        print("{:8}", num);
    }

    sort(a.begin(), a.end(), Dog {});
    
    println("sorted");
    for(int num : a) {
        print("{:8}", num);
    }

    //save("stl.cpp");
}