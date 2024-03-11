// -------------------------------------------------------------------------------
// 2024 1학기 STL 월910화78     3월 11일 월요일                              (2주1)
// 
// -------------------------------------------------------------------------------

#include <iostream>
#include <fstream>
#include <random>
#include <format>
#include <algorithm>
#include <print>
#include <array>
#include <list>

#include "save.h"

using namespace std;


//random_device rd;
default_random_engine dre;		// 크기가 커서 전역변수로 한다
uniform_int_distribution uid { 0, 99'999 };


// [문제] 파일 "int값들.txt"에는 몇 개인지 모르는 int가 저장되어있다. 
// 모두 몇 개인지 출력하고 그 중에 가장 큰 값도 화면에 출력하라.


int main() {
	ifstream in { "int값들.txt" };
	if(not in) {
		exit(0);
	}

	int num;
	int cnt {};
	int max_value = numeric_limits<int>::min();
	while(in >> num) {
		++cnt;
		if(max_value < num) {
			max_value = num;
		}
	}

	println("cnt: {}", cnt);
	println("max: {}", max_value);

	save("stl.cpp");
}
