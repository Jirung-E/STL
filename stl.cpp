// --------------------------------------------------------------------------------
// 2024 1�б� STL  ��910ȭ78        3�� 12�� ȭ����                            (2��2)
// 
// --------------------------------------------------------------------------------

#include <iostream>
#include <fstream>
#include <array>
#include <algorithm>

#include "save.h"

using namespace std;

// [����] "dogs" ������ binary���� ����Ͽ���. 
// ���⿡�� class Dog��ü 100���� write�Լ��� ����Ͽ� ����Ͽ���.
// class Dog�� ����� ������ ����.
// ������ �о� num���� 1000�̸��� Dog��ü�� ���� ����϶�.

class Dog {
    char c;
    int num;

public:
    int getNum() const {
        return num;
    }

    void show() const {
        cout << "Dog: { " << c << ", " << num << " }" << endl;
    }
};


int main() {
    ifstream in { "dogs", ios::binary };
    if(not in) {
        cout << "������ �� �� ����." << endl;
        return 0;
    }

    array<Dog, 100> dogs;
    in.read((char*)dogs.data(), sizeof(dogs));

    int count = count_if(dogs.begin(), dogs.end(), [](const Dog& dog) {
        return 1000 > dog.getNum();
    });
    cout << count << endl;

    //save("stl.cpp");
}