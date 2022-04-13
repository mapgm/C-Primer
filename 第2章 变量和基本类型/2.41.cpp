#include<iostream>
#include<cstring>

struct Sales_data
{
	std::string bookID;
	std::string bookName;
	double price = 0.0;
	int soldSum = 0;
};

int main()
{
	Sales_data book1, book2;
	
	std::cin >> book1.bookID >> book1.price >> book1.soldSum >> book2.bookID >> book2.price >> book2.soldSum;
	
	if (book1.bookID == book2.bookID)
	{
		double totalPrice = book1.price;
		int totalSoldSum = book1.soldSum + book2.soldSum;
		int total = totalPrice * totalSoldSum;
		std::cout << book1.bookID << "的单价为" << totalPrice << ", " << "卖出了" << totalSoldSum << "本";
		std::cout << "总价为" << total << std::endl;
	}
	else
	{
		std::cout << "两本书的种类不同，请重新输入！！" << std::endl;
	}
	
	return 0;
}
