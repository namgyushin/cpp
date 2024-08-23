#include <iostream>

int main()
{
	
	
	//std::cout << "hello, world";											//hello, world
	//operator<<(std::cout,"hello, world");								//hello, world
	//std::cout.operator<< ("hello, world");				
	
	//std::cout << std::endl;													//	\n
	//operator<<(std::cout, std::endl);										//	에러
	//std::cout.operator<<(std::endl);										//	\n
	
	//std::cout << "hello, world" << std::endl;							//hello, world \n
	operator<<(std::cout,"hello, world").operator<<(std::endl);		//hello, world \n
	
	return 0;
}

/*	
				operator overloading
----------------------a + b-----------------------

--> a.operator+(b) or operator+(a, b)
		(맴버함수)   	--> 	(전역함수)      순으로 찾는다
*/
