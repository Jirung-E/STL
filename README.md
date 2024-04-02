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
