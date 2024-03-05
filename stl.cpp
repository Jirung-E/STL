// -------------------------------------------------------------------------------
// 2024 1�б� STL ��910ȭ78     3�� 5�� ȭ����                                (1��2)
// 
// ���ͳݿ��� C++��� ���� ������ ã�ƺ���
// -------------------------------------------------------------------------------

#include <iostream>
#include <random>
#include <format>

#include "save.h"

using namespace std;


//random_device rd;
default_random_engine dre;		// ũ�Ⱑ Ŀ�� ���������� �Ѵ�
uniform_int_distribution uid { 1000, 9999 };


// [����] ���� ū ���� ã�� ȭ�鿡 ����Ѵ�.


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

	cout << "�ִ� - " << max << endl;

	cout << *std::max_element(a, a+1000) << endl;
	cout << *std::max_element(begin(a), end(a)) << endl;

	save("stl.cpp");
}
