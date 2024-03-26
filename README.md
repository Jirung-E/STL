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