// -------------------------------------------------------------------------------
// 2024 1학기 STL 월910화78     3월 11일 월요일                              (2주1)
// 
// -------------------------------------------------------------------------------

#include <iostream>
#include <random>
#include <format>
#include <print>
#include <algorithm>

#include "save.h"

using namespace std;


//random_device rd;
default_random_engine dre;		// 크기가 커서 전역변수로 한다
uniform_int_distribution uid { 1000, 9999 };


// [문제] 가장 큰 수를 찾아 화면에 출력한다.


int main() {
    int a[1000];	// contiguous

	for(int& num : a) {
		num = uid(dre);
		print("{:8}", num);
	}

	cout << endl;

	print("최댓값 - {}", *max_element(begin(a), end(a)));

	save("stl.cpp");
}
