// --------------------------------------------------------------------------------
// 2024 1�б� STL  ��910ȭ78        3�� 26�� ������                            (4��2)
// 
// 5�� 6�� ������ ���� ��
// --------------------------------------------------------------------------------

#include <print>
#include <random>
#include <array>

#include "save.h"

using namespace std;


uniform_int_distribution uid { 1, 1'000 };
default_random_engine dre;


// [����] [10'000, 99'999]������ ���� ���� int 100���� ����� �ּ���.
// qsort�� ����Ͽ� ������������ �����ϼ���.
// ������ ����� ȭ�鿡 �����ּ���.  


int main() {
    array<int, 100> arr;
    generate(arr.begin(), arr.end(), []() { return uid(dre); });

    qsort(arr.data(), arr.size(), sizeof(int),
        [](const void* x, const void* y) {
            return *(int*)x - *(int*)y;
        }
    );

    for(auto e : arr) {
        print("{:8}", e);
    }

    //save("stl.cpp");
}
