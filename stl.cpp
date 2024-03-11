// -------------------------------------------------------------------------------
// 2024 1학기 STL 월910화78     3월 11일 월요일                              (2주1)
// 
// -------------------------------------------------------------------------------

#include <iostream>
#include <fstream>
#include <random>
#include <format>
#include <print>
#include <algorithm>
#include <array>

#include "save.h"

using namespace std;


//random_device rd;
default_random_engine dre;		// 크기가 커서 전역변수로 한다
uniform_int_distribution uid { 1000, 9999 };


// [문제] 가장 큰 수를 찾아 화면에 출력한다.


int main() {
	array<int, 100> a;
	
	for(int& num : a) {
		num = uid(dre);
	}

	// [문제] a에 있는 int값을 파일 "int값들.txt"에 기록하라
	ofstream out { "int값들.txt" };
	for(int num : a) {
		out << num << endl;
	}

	save("stl.cpp");
}
