// -------------------------------------------------------------------------------
// 2024 1학기 STL 월910화78     3월 5일 화요일                                (1주2)
// 
// 인터넷에서 C++언어 관련 설명을 찾아본다
// -------------------------------------------------------------------------------

#include <iostream>
#include <random>
#include <format>

#include "save.h"

using namespace std;


//random_device rd;
default_random_engine dre;		// 크기가 커서 전역변수로 한다
uniform_int_distribution uid { 1000, 9999 };


// [문제] 가장 큰 수를 찾아 화면에 출력한다.


int main() {
	int a[1000];

	for(int& num : a) {
		num = uid(dre);
		cout << format("{:8}", num);
	}



	int max = numeric_limits<int>::min();

	for(int num : a) {
		if(max < num) {
			max = num;
		}
	}

	cout << "최댓값 - " << max << endl;

	cout << *std::max_element(a, a+1000) << endl;
	cout << *std::max_element(begin(a), end(a)) << endl;

	save("stl.cpp");
}
