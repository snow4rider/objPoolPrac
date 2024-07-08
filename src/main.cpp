#include <iostream>
#include "obj.cpp"


int main ()
{
	std::cout << "hello World" << std::endl;
	
	Obj number;

	number.setData(45);

	std::cout << number.getData() << std::endl;
	
	return 0;
}
