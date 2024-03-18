// --------------------------------------------------------------------------------
// 2024 1학기 STL  월910화78        3월 12일 화요일                            (2주2)
// 
// --------------------------------------------------------------------------------

#include <iostream>
#include <fstream>
#include <list>

#include "save.h"

using namespace std;

// [문제] "dogs" 파일은 binary모드로 기록하였다. 
// 여기에는 몇개인지 모르는 class Dog객체를 write함수를 사용하여 기록하였다.
// class Dog의 멤버는 다음과 같다.
// 파일을 읽어 num값이 가장 큰 Dog 객체를 화면에 출력하라.

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
        cout << "파일을 열 수 없다." << endl;
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