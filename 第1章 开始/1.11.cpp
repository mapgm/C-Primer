#include<iostream>
int main()
{
	int start = 0, end = 0;
	
	std::cout << "Please input two numbers: ";
	std::cin >> start >> end;
	while (start <= end)
	{
		std::cout << start << ' ';
		++ start;
	}
	
	return 0;
}
