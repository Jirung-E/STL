// -------------------------------------------------------------------------------
// 2024 1�б� STL ��910ȭ78     3�� 11�� ������                              (2��1)
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
default_random_engine dre;		// ũ�Ⱑ Ŀ�� ���������� �Ѵ�
uniform_int_distribution uid { 1000, 9999 };


// [����] ���� ū ���� ã�� ȭ�鿡 ����Ѵ�.


int main() {
	array<int, 100> a;
	
	for(int& num : a) {
		num = uid(dre);
	}

	// [����] a�� �ִ� int���� ���� "int����.txt"�� ����϶�
	ofstream out { "int����.txt" };
	for(int num : a) {
		out << num << endl;
	}

	save("stl.cpp");
}
