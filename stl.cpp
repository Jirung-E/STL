// --------------------------------------------------------------------------------
// 2024 1�б� STL  ��910ȭ78        3�� 12�� ȭ����                            (2��2)
// 
// --------------------------------------------------------------------------------

#include <iostream>
#include <fstream>
#include <print>
#include <random>
#include <array>

#include "save.h"

using namespace std;


default_random_engine dre;
uniform_int_distribution<> uidChar { 'a', 'z' };
uniform_int_distribution<> uidNum { 1, 99'999 };


class Dog {
    char c { (char)uidChar(dre) };
    int num { uidNum(dre) };

public:
    bool operator<(const Dog& dog) const {
        return num < dog.num;
    }

    friend ostream& operator<<(ostream& os, const Dog& dog) {
        return os << "����: " << dog.c << ", ����: " << dog.num;
    }
};


int main() {
    // [����] dogs�� binary mod/write�� ���Ͽ� ����϶�.
    //ofstream out { "dogs", ios::binary };
    //out.write((const char*)dogs.data(), sizeof(dogs));
    
    // ��ϵ� ������ �о num���� ���� ū Dog�� ã�� ȭ�鿡 ����϶�.
    array<Dog, 100> dogs;
    ifstream in { "dogs", ios::binary };
    in.read((char*)dogs.data(), sizeof(dogs));

    cout << *max_element(dogs.begin(), dogs.end()) << endl;

    save("stl.cpp");
}