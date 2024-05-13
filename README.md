# STL

## 1���� - 03/05 
### Generic Programming
�ڷ����� ���� ���� ���α׷���
���ø��Լ�, ���ø�Ŭ���� 

����� ǥ���ϴ°�. �ڷ����� �߿����� ����
�ڷ����� ������� ������ ��� -> �˰���

���ø� �Լ� -> �˰���
Ŭ���� -> �ڷᱸ��


## 2���� - 03/11
### contiguous memory
������ ���Ӽ�   
�����͸� �����ö� �ֺ� �����͸� ������ �������� ������ ������.  
T[N] ������ �迭�� POD(Plain Old Data)  
���� ����!  
array�� ��� ���

### continuous memory
�ð��� ���Ӽ�  


## 2���� - 03/12
DMA(Direct Memory Access) ����� CPU�� ���� ���� �޸𸮿� �����ؼ� 
�����͸� �аų� ���� ����̴�.  
������ CPU���ͷ�Ʈ�� �߻���Ű�� �ʰ� �޸𸮿� ������ �� �ִ�.  

|open���|�а� ����|
|---|---|
|text|�����(<<, >>)|
|binary|������(read, write)|

���� �����, ������ ���� ¦�� ���� ����(����� �ʴ´�)


## 3���� - 03/19
windows�� �޸� ����  

�����ּ�

|����|
|:---:|
|stack|    
|...|  
|...|  
|free store|
|code|  
|data|  

�����ּ�  

���ͳݿ� �˻��ؼ� ������ �׸��̶��� �� �ٸ���.  

���� ����Ŭ
fetch -> decode -> execute   ->   writeback  

���ÿ� ���� �����͸� ���� ����. ���� �־��.  

���������� �ʱ�ȭ ���ϰ� ���������� �����(�ʱ�ȭ���� ���� data == default�� �ʱ�ȭ�� data)
�������Ͽ��� '400MB�� default�� �ʱ�ȭ �ϴ� code' �� ��ϵȴ�.
('�ʱ�ȭ���� ���� ���� DATA����' �� ������.)
�ٵ� �ϳ��� �ʱ�ȭ�ϸ� �޸�image�� ĸ���ؼ�	�������Ͽ� �����ϰ�,  
����� �� �̹����� �״�� DATA������ �����Ѵ�.  
�״ϱ� �������� �ʱ�ȭ�� �ظ��ϸ� ���� ����.  


## 4���� - 03/25
�޸� �Ŵ����� �޸� �Ҵ��� �����Ѵ�.  
�޸𸮰� �����ִ°��� ��ũ�帮��Ʈ�� ǥ��  
����ȭ  

�޸� �뷮�� �ʰ��� �޸� �Ҵ��� �Ҷ�  

- RAII(Resource Acquisition Is Initialization)  
  > RAII idiom - �޸�, ����, jthread  
- Stack unwinding    
  > ���ܰ� �߻��ϴ��� �ڿ��� �����Ѵ�.   

https://www.youtube.com/watch?v=Rfu06XAhx90&ab_channel=CppCon  

## 4���� - 03/26
ostreambuf_iterator, istreambuf_iterator  
qsort: C�Լ������� ���׸� 

## 5����	 - 04/01
NlogN ���� log�� 2�� ������ �ϴ� �α�  
�Լ�ȣ�� ������ function call operator: operator()
```cpp
class Dog {
    int m;

public:
    bool operator()(int a, int b) {
        m++;
        return a > b;
    }
};
```
�̷��� ��ü�� �Լ� ȣ��ó�� ����� �� ������ ���¸� ���� �� �ִ�.  
�Լ��� ������ �̷��� ���´� ����ȴ�.  

callable type - ������ Ÿ���� �ִ�.  
1. �Լ� ������
2. ����
3. ()������(function call operator)�� �����ε��� Ŭ������ ��ü  
�´� �ڵ念���� �ִ�.(3�� ��� ��ü�� ()������)

```cpp
class lambda {      // mangling��
public:
    void operator()() {
        cout << "������ ��ü? (vs������)function object" << endl;
    }
};
```

�� �پ��� Ÿ�Ե��� ȣȯ�ǰ� �ϱ� ���� function�� �������.  
function�� ȣ�� ������ Ÿ���� ��ǥ�Ѵ�.  
```cpp
void f(function<bool(int, int)> x) {
    cout << x(3, 5) << endl;
}
```

## 5���� - 04/02


## 6���� - 04/08
Container(�ڷᱸ��) - class template  
> "Containers are objects that store other objects." - ǥ�ع��� ��  
1. Sequence Container  
  - `array<T, N>`
  - `vector<T>`
  - `deque<T>`
    > �������� Ȯ�� ����  
  - `forward_list<T>`
    > �̱� ��ũ�� ����Ʈ  
  - `list<T>`
2. Associative Container
3. Unordered Associative Container  
��Ÿ: Stack, Queue, Float, Set, Map, ...  

Algorithm - function template  
1. Non-modifying
2. Modifying
3. Sort  
��Ÿ: Numeric, ...   

�����̳ʿ� �˰����� iterator�� ���� ��ȣ�ۿ�  
�˰����� �����̳��� ����, ��, ������ �˰� ���ش�.  
`Iterator Pattern`  
`OCP(Open-Closed Principle)`  



`component pattern`?  

## 6���� - 04/09
vector�� ����: ũ��, ������, ���Ҵ������ʰ� ������ �� �ִ� ������ ����  
  > size, data, capacity  
capacity�� ������ 1.5�谡 �ȴ�.  

���Ҵ� ���� �������� �������� ���簡 �Ͼ�µ� ���� ���Ͼ��  
����?? 


## 7���� - 04/15
���Ҵ� ���� �������� �������� ���簡 �Ͼ�µ� ���� ���Ͼ�°�  
noexcept �����̾���.  
> ���� ���� ������ �̵��ÿ� ���ܰ� �߻��ϸ� ������ �Ѽյ� �� �ִ�.  
> �̷����� �����ϱ� ���� ���縦 �Ѵ�.  
> noexcept�� ���̸� �̷� ���ܰ� �߻����� �ʴ´ٰ� �˷��ִ� ���̴�.  

remove: �������� �ʰ� �ڷ� �о������. ���� ũ�⸦ ���� �ٿ���� �Ѵ�.  
```cpp
// erase-remove idiom
v.erase(remove(v.begin(), v.end(), 3));
```

## 7���� - 04/16
�׳� `erase(container, value)` ���� �ȴ�.  

`vector<int> v(100);`�� `vector<int> v { 100 };`�� �ٸ���  
100���� �ְų� 100�� �ְų�  

`erase_if(container, lambda)`
`auto result = v | views::filter([](int n) { return n % 2 == 0; });`

`vector::insert`�� ������ ���� ����.  

deque - vector�� list�� �߰����¸� ��� �ڷᱸ��(stl����)  
4���� ������ �Ҵ�ȴ�.  


- vector: �޸𸮻� ���ӵ� ��ġ  
- deque: n���� ���ӵ� ��ġ
- list: ���ӵ��� ���� ��ġ

> amortized constant time: ��������� ����ð�

list�� ����: �������� �Ұ�, ������(prev, next)�� ���� �޸� �Ҹ�  

deque�� vector���� ���� ���� ���� �� �ִ� -> ������ ������ �Ҵ��� �����ؼ�  

list���� ���� ���ϰ� ������
vector���� ������ �Ҵ��� �����ϴ�


## 8���� - 04/22
list  
sort�� ������ �Ϸ��� ���� ������ �ݺ��ڸ� �˷�����Ѵ�.  
�׷��� list�� ���Ѵ�.  
�Ϸ��� list::sort�� �̿��ؾ��Ѵ�.  
������ �ϸ� ����Ű�� �����͸� �ٲ�Ƿ� ���� �޽����� ������ �ʴ´�.  
�� ������ ������(equivalent) ���ҿ� ���� ������ �����Ѵ�.(stable sort)  

������ �ݺ��� r~~  
https://en.cppreference.com/w/cpp/iterator/reverse_iterator 


## 9���� - 04/30
list  
- splice: ����Ʈ ��ħ
- merge: ���ĵ� ����Ʈ ��ħ, stable�ϰ�
- sort: ����
- unique: �ߺ� ���� ����

���ڿ� ��: Lexicographical comparison

`forward_list`: singly linked list
C��Ÿ�Ϸ� �ۼ��� singly linked list���� �ð�, ������ ������尡 ���� �ʴ�

`span`?
char[], string, vector �� �޸𸮰� contiguous�� �͵��� �Ѱ��� ���ϵ� ������� ǥ���� �� �ְ� �� Ŭ����


## 10���� - 05/06
stl�� �������?  
- container
- algorithm
- �� ���� �����ϴ� iterator

`void f()`, `class X::operator()`, `[](){}` ���� ��ǥ�ϴ� `function`  
`char*`, `char[]`, `const char*`, `string` ���� ��ǥ�ϴ� `string_view`  
`int[]`, `array`, `vector` ���� ��ǥ�ϴ� `span`  

iterator: Iterators are a generalization of pointers  
  �����͸� �Ϲ�ȭ�� ��.  
  �̰� ����ϸ� �ڷᱸ���� ������ ���� ���� ������ ������� �ڵ� ����  

named requirement: ���Ѿ��� ����?  
> `concept`: named requirement�� ǥ���ϴ� ��?  

- LegacyInputIterator
- LegacyOutputIterator
- LegacyForwardIterator
- LegacyBidirectionalIterator
- LegacyRandomAccessIterator
- LegacyContiguousIterator

`Iter::iterator_concept`  
`Iter::iterator_category`  

`iterator_concept`�� contiguous�� �����̳��� iterator���� �ִ�.  

SFINAE: Substitution Failure Is Not An Error  
  > �����Ϸ��� �Լ� ���ø��� ���ڸ� �����Ϸ��� �� ��, ������ �Ұ����ϸ� �� �Լ� ���ø��� �ĺ����� �����Ѵ�.  
  > �׷��� ������ ������ ���� �ʴ´�.  



## 10���� - 05/07
��κ��� ������������ ��ȸ��.  

C++ ǥ���� ��Ű�� �ݺ��ڰ� �Ƿ��� ���� �ټ����� �׸��� �����ؾ� �Ѵ�.  
- `difference_type`: �� �ݺ��� ������ �Ÿ��� ��Ÿ���� �ڷ���?
- `value_type`: ���� �ڷ���?
- `pointer`: ������?
- `reference`: ?
- `iterator_category`: � ������ �ݺ�������


## 11���� - 05/13
sort�˰����� ���ڷ� ���� �ݺ��ڰ� random access�� �����ϴٰ� �����Ѵ�.  
random_access_iterator�� +=, -= �����ڸ� �����Ѵ�?  

l-value: left-value���µ� location-value�� �ٲ����? ������ġ�� ã�� �� �ִ� ��?  

![value_cat](cpp_value_categories.png)  
�̰� �� ����  

`method();`�� `method() const;`�� �ٸ���. �����ε� �����ϴ�.

