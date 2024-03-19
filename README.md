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

