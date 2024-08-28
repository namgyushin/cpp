//#include <cstdio>
#include <iostream>
#include "stack.h"

int main()
{
	Stack s1;			// Stack s1(100);
	Stack s2(20);		// Stack s2 = 20;	X

	//Stack s3 = s2;
	//s1 = s2;

	s1.push(100);
	s1.push(200);
	s1.push(300);
	
	std::cout << "s1 1st pop() : " << s1.pop() << std::endl;	
	std::cout << "s1 2nd pop() : " << s1.pop() << std::endl;
	std::cout << "s1 3rd pop() : " << s1.pop() << std::endl;

	for (int i = 1; i <= 10; ++i)
	{
		if (!s2.isFull())
		{
			s2.push(i);
		}
	}
	
	while (!s2.isEmpty())
		{
			std::cout << s2.pop() << std::endl;
		}
		

	
	// s2.push(900);
	// s2.push(800);
	// s2.push(700);
	
	// std::cout << "s2 1st pop() : " << s2.pop() << std::endl;
	// std::cout << "s2 2nd pop() : " << s2.pop() << std::endl;
	// std::cout << "s2 3rd pop() : " << s2.pop() << std::endl;
	
	// //s1.cleanupStack();
	// //s2.cleanupStack();
	
	return 0;			//소멸자 호출 (없으면 컴파일러가 호출)
}






