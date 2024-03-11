// -------------------------------------------------------------------------------
// 2024 1학기 STL 월910화78     3월 11일 월요일                              (2주1)
// 
// -------------------------------------------------------------------------------

#include <print>

#include "save.h"

using namespace std;


template<typename T, size_t size>
class Array {
	T arr[size];

public:
	T& operator[](size_t index) {
		return arr[index];
	}
};

int main() {
	Array<int, 100> arr;

	println("Array<int, 100> size: {}", sizeof(arr));
	println("arr[10]: {}", arr[0]);

	save("stl.cpp");
}


