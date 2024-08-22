//#include <cstdio>
#include <iostream>
#include "queue.h"

int main()
{
	Queue q1(10), q2(100);			//생성자 호출

	//q1.initQueue(10);
	//q2.initQueue(100);
	
	q1.push(100);
	q1.push(200);
	q1.push(300);
	
	//q1.tos = 0;
	
	//printf("q1 1st pop() : %d\n", q1.pop());
	std::cout << "q1 1st pop() : ";		//결과값은 cout
	std::cout << q1.pop();
	std::cout << "\n";
	
	std::cout << "q1 2nd pop() : " << q1.pop() << std::endl;
	std::cout << "q1 3st pop() : " << q1.pop() << std::endl;
	
	//pop(&s1);

	q2.push(900);
	q2.push(800);
	q2.push(700);
	
	std::cout << "q2 1st pop() : " << q2.pop() << std::endl;
	std::cout << "q2 2nd pop() : " << q2.pop() << std::endl;
	std::cout << "q2 3st pop() : " << q2.pop() << std::endl;
	
	//q1.cleanupQueue();
	//q2.cleanupQueue();
	
	return 0;					//소멸자 호출
}
