#ifndef QUEUE_H
#define QUEUE_H


class Queue
{
private:
	int *pArr;
	int size;
	int rear;
	int front;
	
public:
	Queue(int size);				//--> constructor
	~Queue();						//--> destructor

	void push(int data);		// func. declaration
	int pop();

};


#endif
