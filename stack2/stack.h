#ifndef STACK_H
#define STACK_H
//#define STACKSIZE 100
//extern int STACKSIZE;

class Stack
{
private:
	static const int STACKSIZE;		//전역변수인데 클래스랑 연관있어서 스태틱으로 씀

	int *pArr_;
	int size_;
	int tos_;
	
	Stack(const Stack& );
	Stack& operator=(const Stack& );

public:
	explicit Stack(int size = STACKSIZE);               //명시적인 main - 7번 못쓰게한다
	~Stack();					

	void push(int data);
	int pop();

	bool isFull() const;
	bool isEmpty() const;
	
};

#endif
