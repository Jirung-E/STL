// --------------------------------------------------------------------------------
// 2024 1�б� STL  ��910ȭ78        3�� 12�� ȭ����                            (2��2)
// 
// --------------------------------------------------------------------------------

#include <iostream>
#include <fstream>
#include <list>

#include "save.h"

using namespace std;

// [����] "dogs" ������ binary���� ����Ͽ���. 
// ���⿡�� ����� �𸣴� class Dog��ü�� write�Լ��� ����Ͽ� ����Ͽ���.
// class Dog�� ����� ������ ����.
// ������ �о� num���� ���� ū Dog ��ü�� ȭ�鿡 ����϶�.

class Dog {
    char c;
    int num;

public:
    bool operator<(const Dog& other) {
        return num < other.num;
    }

    void show() const {
        cout << "Dog: { " << c << ", " << num << " }" << endl;
    }

    friend istream& operator>>(istream& in, Dog& dog) {
        return in.read((char*)&dog, sizeof(Dog));
    }
};


int main() {
    ifstream in { "dogs", ios::binary };
    if(not in) {
        cout << "������ �� �� ����." << endl;
        return 0;
    }

    list<Dog> dogs {};
    Dog dog;
    while(in >> dog) {
        dogs.push_back(dog);
    }

    cout << dogs.size() << endl;
    dog.show();
    max_element(dogs.begin(), dogs.end())->show();

    //save("stl.cpp");
}