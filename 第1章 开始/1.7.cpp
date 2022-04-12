#include<iostream>
/*
 * 可以使用/*和*/来注释代码
 */
int main()
{
	int v1 = 0, v2 = 0;
	
	std::cout << "Pleas input two numbers: ";
	std::cin >> v1 >> v2;
	std::cout << "The product of " << v1 << " and " << v2 << " is " << v1 * v2 << std::endl;
	
	return 0;
}
