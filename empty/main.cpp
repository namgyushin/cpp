#include "empty.h"

int main()
{
	Empty e1;						//생성자
	const Empty e2 = e1;		//복사
	
	e1 = e2;						//치환
	
	Empty* pe = &e1;				// e1.operator&()
	
	const Empty* pe2 = &e2;	// e2.operator&()
	
	return 0;						//소멸자
}
