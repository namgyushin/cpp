//#include <cstdio>
#include <iostream>
#include "stack.h"

int main()
{
	Stack s1(10), s2(100);		//생성자 호출 (없으면 컴파일러가 호출)
	//s1.initStack(10);
	//s2.initStack(100);
	
	s1.push(100);
	s1.push(200);
	s1.push(300);
	
	//s1.tos = 0;
	
	//printf("s1 1st pop() : %d\n", s1.pop());
	std::cout << "s1 1st pop() : ";
	std::cout << s1.pop();
	std::cout << "\n";
	
	std::cout << "s1 2nd pop() : " << s1.pop() << std::endl;
	std::cout << "s1 3rd pop() : " << s1.pop() << std::endl;
	
	s2.push(900);
	s2.push(800);
	s2.push(700);
	
	std::cout << "s2 1st pop() : " << s2.pop() << std::endl;
	std::cout << "s2 2nd pop() : " << s2.pop() << std::endl;
	std::cout << "s2 3rd pop() : " << s2.pop() << std::endl;
	
	//s1.cleanupStack();
	//s2.cleanupStack();
	
	return 0;			//소멸자 호출 (없으면 컴파일러가 호출)
}






