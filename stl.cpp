// -------------------------------------------------------------------------------
// 2024 1�б� STL ��910ȭ78     3�� 11�� ������                              (2��1)
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
default_random_engine dre;		// ũ�Ⱑ Ŀ�� ���������� �Ѵ�
uniform_int_distribution uid { 1000, 9999 };


// [����] ���� ū ���� ã�� ȭ�鿡 ����Ѵ�.


int main() {
    int a[1000];	// contiguous

	for(int& num : a) {
		num = uid(dre);
		print("{:8}", num);
	}

	cout << endl;

	print("�ִ� - {}", *max_element(begin(a), end(a)));

	save("stl.cpp");
}
