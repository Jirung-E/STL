// -------------------------------------------------------------------------------
// 2024 1학기 STL 월910화78     3월 11일 월요일                              (2주1)
// 
// -------------------------------------------------------------------------------

#include <iostream>
#include <random>
#include <array>

#include "save.h"

using namespace std;


default_random_engine dre;
uniform_int_distribution uidChar { 'a', 'z' };
uniform_int_distribution uidNum { 1, 99'999 };

class Dog {
	char c { (char)uidChar(dre) };
	int num { uidNum(dre) };

public:
	friend ostream& operator<<(ostream& os, const Dog& dog) {
		return os << "" << dog.c << "" << dog.num;
	}
};

int mai2n() {
	array<Dog, 100> dogs {};

	for(const Dog& dog : dogs) {
		cout << dog << endl;
	}

	// [문제 ] dogs를 binary mode/write로 파일에 기록하라.
// 기록된 파일을 읽어서 num값이 가장 큰 Dog를 찾아 화면에 출력하라.	// [문제 ] dogs를 binary mode/write로 파일에 기록하라.
	// 기록된 파일을 읽어서 num값이 가장 큰 Dog를 찾아 화면에 출력하라.

	//save("stl.cpp");
}
