#include<iostream>
int main()
{
	int val = 12, val2 = 15;
	int *p = &val;
	
	std::cout << val << ' ' << p << ' ' << *p << std::endl;

	// 改变指针的值
	p = &val2;
	
	std::cout << val << ' ' << p << ' ' << *p << std::endl;
	
	// 改变指针所指对象的值
	*p = 10;
	
	std::cout << val << ' ' << p << ' ' << *p << std::endl;
	
	return 0;
}
