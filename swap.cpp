#include <iostream>

void swap(int &ra, int &rb)
{
	int temp = ra;
	ra = rb;
	rb = temp;
}

int main()
{
	int a, b;
	a = 100;
	b = 200;
	
	swap(a, b);
	
	std::cout << "a : " << a << "\t" << "b : " << b << std::endl;
	return 0;
}
