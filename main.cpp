// -------------------------------------------------------------------------------
// 2024 1�б� STL ��910ȭ78     3�� 11�� ������                              (2��1)
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

	// [���� ] dogs�� binary mode/write�� ���Ͽ� ����϶�.
// ��ϵ� ������ �о num���� ���� ū Dog�� ã�� ȭ�鿡 ����϶�.	// [���� ] dogs�� binary mode/write�� ���Ͽ� ����϶�.
	// ��ϵ� ������ �о num���� ���� ū Dog�� ã�� ȭ�鿡 ����϶�.

	//save("stl.cpp");
}
