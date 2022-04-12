#include<iostream>
int main()
{
	int start = 0, end = 0;
	
	std::cout << "Please input two numbers: ";
	std::cin >> start >> end;
	for (int i = start;i <= end;i ++)
	{
		std::cout << i << ' ';
	}
	
	return 0;
}
