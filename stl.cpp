// --------------------------------------------------------------------------------
// 2024 1학기 STL  월910화78        3월 12일 화요일                            (2주2)
// 
// --------------------------------------------------------------------------------

#include <iostream>
#include <fstream>
#include <array>
#include <algorithm>

#include "save.h"

using namespace std;

// [문제] "dogs" 파일은 binary모드로 기록하였다. 
// 여기에는 class Dog객체 100개를 write함수를 사용하여 기록하였다.
// class Dog의 멤버는 다음과 같다.
// 파일을 읽어 num값이 1000미만인 Dog객체의 수를 출력하라.

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
        cout << "파일을 열 수 없다." << endl;
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