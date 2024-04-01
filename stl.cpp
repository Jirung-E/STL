// --------------------------------------------------------------------------------
// 2024 1�б� STL  ��910ȭ78        4�� 1�� ������                            (5��1)
// 
// 5�� 6�� ������ ���� ��
// 4�� 23�� ����
// 
// callable type - ������ Ÿ���� �ִ�.
// sort�Ҷ� � �������� ���������� ��� sort�Լ����� �˷��ֳ�?
// 1. �Լ� �����͸� �����Ѵ�.
// 2. ���ٸ� �����Ѵ�.
// 3. ()������(function call operator)�� �����ε��� Ŭ������ ��ü
// --------------------------------------------------------------------------------

#include <iostream>
#include <print>
#include <random>
#include <array>

#include "save.h"

using namespace std;


// [����] [1, 1'000]������ ���� ���� int 100���� ����� �ּ���.
// std::sort�� ����Ͽ� ������������ �����ϼ���.
// ������ ����� ȭ�鿡 �����ּ���.  

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