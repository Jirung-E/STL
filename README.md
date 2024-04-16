# STL

## 1주차 - 03/05 
### Generic Programming
자료형과 관련 없는 프로그래밍
템플릿함수, 템플릿클래스 

기능을 표현하는것. 자료형은 중요하지 않음
자료형에 관계없이 절차를 기술 -> 알고리즘

템플릿 함수 -> 알고리즘
클래스 -> 자료구조


## 2주차 - 03/11
### contiguous memory
공간상 연속성   
데이터를 가져올때 주변 데이터를 통으로 가져오기 때문에 빠르다.  
T[N] 형식의 배열은 POD(Plain Old Data)  
쓰지 마라!  
array를 대신 써라

### continuous memory
시간적 연속성  


## 2주차 - 03/12
DMA(Direct Memory Access) 명령은 CPU의 개입 없이 메모리에 접근해서 
데이터를 읽거나 쓰는 명령이다.  
때문에 CPU인터럽트를 발생시키지 않고 메모리에 접근할 수 있다.  

|open모드|읽고 쓰기|
|---|---|
|text|고수준(<<, >>)|
|binary|저수준(read, write)|

보통 고수준, 저수준 끼리 짝을 맞춰 쓴다(섞어쓰지 않는다)


## 3주차 - 03/19
windows의 메모리 구조  

낮은주소

|구조|
|:---:|
|stack|    
|...|  
|...|  
|free store|
|code|  
|data|  

높은주소  

인터넷에 검색해서 나오는 그림이랑은 좀 다르다.  

실행 사이클
fetch -> decode -> execute   ->   writeback  

스택에 많은 데이터를 쌓지 마라. 힙에 넣어라.  

전역변수를 초기화 안하고 실행파일을 만들면(초기화하지 않은 data == default로 초기화한 data)
실행파일에는 '400MB를 default로 초기화 하는 code' 만 기록된다.
('초기화하지 않은 전역 DATA영역' 이 잡힌다.)
근데 하나라도 초기화하면 메모리image를 캡쳐해서	실행파일에 저장하고,  
실행시 이 이미지를 그대로 DATA영역에 저장한다.  
그니까 전역변수 초기화는 왠만하면 하지 마라.  


## 4주차 - 03/25
메모리 매니저가 메모리 할당을 관리한다.  
메모리가 잡혀있는건지 링크드리스트로 표시  
단편화  

메모리 용량을 초과한 메모리 할당을 할때  

- RAII(Resource Acquisition Is Initialization)  
  > RAII idiom - 메모리, 파일, jthread  
- Stack unwinding    
  > 예외가 발생하더라도 자원을 해제한다.   

https://www.youtube.com/watch?v=Rfu06XAhx90&ab_channel=CppCon  

## 4주차 - 03/26
ostreambuf_iterator, istreambuf_iterator  
qsort: C함수이지만 제네릭 

## 5주차	 - 04/01
NlogN 에서 log는 2를 밑으로 하는 로그  
함수호출 연산자 function call operator: operator()
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
이러한 객체는 함수 호출처럼 사용할 수 있지만 상태를 가질 수 있다.  
함수형 언어에서는 이러한 형태는 지양된다.  

callable type - 무한한 타입이 있다.  
1. 함수 포인터
2. 람다
3. ()연산자(function call operator)를 오버로딩한 클래스의 객체  
셋다 코드영역에 있다.(3의 경우 객체의 ()연산자)

```cpp
class lambda {      // mangling됨
public:
    void operator()() {
        cout << "람다의 정체? (vs에서는)function object" << endl;
    }
};
```

이 다양한 타입들을 호환되게 하기 위해 function을 만들었다.  
function은 호출 가능한 타입을 대표한다.  
```cpp
void f(function<bool(int, int)> x) {
    cout << x(3, 5) << endl;
}
```

## 5주차 - 04/02


## 6주차 - 04/08
Container(자료구조) - class template  
> "Containers are objects that store other objects." - 표준문서 중  
1. Sequence Container  
  - `array<T, N>`
  - `vector<T>`
  - `deque<T>`
    > 양쪽으로 확장 가능  
  - `forward_list<T>`
    > 싱글 링크드 리스트  
  - `list<T>`
2. Associative Container
3. Unordered Associative Container  
기타: Stack, Queue, Float, Set, Map, ...  

Algorithm - function template  
1. Non-modifying
2. Modifying
3. Sort  
기타: Numeric, ...   

컨테이너와 알고리즘이 iterator를 통해 상호작용  
알고리즘이 컨테이너의 시작, 끝, 다음을 알게 해준다.  
`Iterator Pattern`  
`OCP(Open-Closed Principle)`  



`component pattern`?  

## 6주차 - 04/09
vector의 구조: 크기, 데이터, 재할당하지않고 관리할 수 있는 원소의 개수  
  > size, data, capacity  
capacity는 이전의 1.5배가 된다.  

재할당 보는 과정에서 교수님은 복사가 일어나는데 나는 안일어난다  
뭐임?? 


## 7주차 - 04/15
재할당 보는 과정에서 교수님은 복사가 일어나는데 나는 안일어나는거  
noexcept 때문이었다.  
> 벡터 내의 데이터 이동시에 예외가 발생하면 원본이 훼손될 수 있다.  
> 이런일을 방지하기 위해 복사를 한다.  
> noexcept를 붙이면 이런 예외가 발생하지 않는다고 알려주는 것이다.  

remove: 삭제하지 않고 뒤로 밀어버린다. 따라서 크기를 직접 줄여줘야 한다.  
```cpp
// erase-remove idiom
v.erase(remove(v.begin(), v.end(), 3));
```

## 7주차 - 04/16
그냥 `erase(container, value)` 쓰면 된다.  

`vector<int> v(100);`와 `vector<int> v { 100 };`는 다르다  
100개를 넣거나 100을 넣거나  

`erase_if(container, lambda)`
`auto result = v | views::filter([](int n) { return n % 2 == 0; });`