#include "save.h"

#include <iostream>
#include <fstream>
#include <vector>
#include <algorithm>
#include <chrono>

using namespace std;


void save(string_view fileName) {
	// fileName�� ���� ���Ϸ� ����
	ifstream in { fileName.data() };
	//cout << sizeof in << endl;
	//cout << addressof(in) << endl;
	//cout << typeid(in).name() << endl;
	if(not in) {
		cout << fileName << " - ���� ���� ����" << endl;
		exit(0);
	}

	// ������ ������ ���ٿ� ���� ���� ����
	ofstream out { "2024 1�б� STL ��910ȭ78 ���� ����.txt", ios::app };

	// ������ �ð��� ����Ѵ�
	out << endl << endl << endl;
	auto now = chrono::system_clock::now();			// epoch
	auto time = chrono::system_clock::to_time_t(now);			// UTC �ð����� ��ȯ
	auto lt = localtime(&time);	// �����ð����� ��ȯ

	auto old = out.imbue(locale("ko_KR"));
	// ��¥�� �� ������� ����Ѵ�
	out << "===============================================================================" << endl;
	out << fileName << put_time(lt, ", ����ð�: %x %A %X ") << endl;
	out << "===============================================================================" << endl;
	out.imbue(old);

	// ���� ������ ������ ��� �о� �� ���Ͽ� ���ٿ� ����
	// STL �ڷᱸ���� �˰����� �̿��� ����.
	// (���� �ڵ�� �ƴѵ�, ���÷� �̷��Ե� �����ϴٴ°� �����ֱ� ����)
	vector<char> v { istreambuf_iterator { in }, {} };
	copy(v.begin(), v.end(), ostreambuf_iterator<char> { out });
}