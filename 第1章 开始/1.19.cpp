#include<iostream>
int main()
{
	int start = 0, end = 0;
	
	std::cout << "Please input two numbers: ";
	std::cin >> start >> end;
	
	if(start <= end)
	{
		while (start <= end)
		{
			std::cout << start << ' ';
			++ start;
		}
	}
	else
	{
		std::cout << "start is bigger than end!!" << std::endl;
	}
	
	return 0;
}
