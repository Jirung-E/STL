// -------------------------------------------------------------------------------
// 2024 1�б� STL ��910ȭ78     3�� 11�� ������                              (2��1)
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


