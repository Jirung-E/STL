// -------------------------------------------------------------------------------
// 2024 1�б� STL ��910ȭ78     3�� 11�� ������                              (2��1)
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
default_random_engine dre;		// ũ�Ⱑ Ŀ�� ���������� �Ѵ�
uniform_int_distribution uid { 0, 99'999 };


// [����] ���� "int����.txt"���� �� ������ �𸣴� int�� ����Ǿ��ִ�. 
// ��� �� ������ ����ϰ� �� �߿� ���� ū ���� ȭ�鿡 ����϶�.


int main() {
	ifstream in { "int����.txt" };
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
