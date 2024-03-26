// --------------------------------------------------------------------------------
// 2024 1학기 STL  월910화78        3월 26일 월요일                            (4주2)
// 
// 5월 6일 월요일 강의 함
// --------------------------------------------------------------------------------

#include <print>
#include <random>
#include <array>

#include "save.h"

using namespace std;


uniform_int_distribution uid { 1, 1'000 };
default_random_engine dre;


// [문제] [10'000, 99'999]범위의 값을 갖는 int 100개를 만들어 주세요.
// qsort를 사용하여 오름차순으로 정렬하세요.
// 정렬한 결과를 화면에 보여주세요.  


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
