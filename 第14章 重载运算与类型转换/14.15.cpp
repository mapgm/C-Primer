#include "14.15.h"

std::istream& operator>>(std::istream &in, Book &book)
{
	in >> book.no_ >> book.name_ >> book.author_ >> book.pubdate_ >> book.number_;
	return in;
}

std::ostream& operator<<(std::ostream &out, const Book &book)
{
	out << book.no_ << " " << book.name_ << " " << book.author_ << " " << book.pubdate_ << " " << book.number_ << std::endl;
	return out;
}

bool operator==(const Book &lhs, const Book &rhs)
{
	return lhs.no_ == rhs.no_;
}

bool operator!=(const Book &lhs, const Book &rhs)
{
	return !(lhs == rhs);
}

bool operator<(const Book &lhs, const Book &rhs)
{
	return lhs.no_ < rhs.no_;
}

bool operator>(const Book &lhs, const Book &rhs)
{
	return rhs < lhs;
}

Book& Book::operator+=(const Book &rhs)
{
	if (rhs == *this)
		this->number_ += rhs.number_;
	
	return *this;
}

Book operator+(const Book &lhs, const Book &rhs)
{
	Book book = lhs;
	book += rhs;
	return book;
}

int main()
{
	Book cp5_1(12345, "CP5", "Lippmen", "2012", 2);
	Book cp5_2(12345, "CP5", "Lippmen", "2012", 4);
	
	std::cout << cp5_1 + cp5_2 << std::endl;
	
	return 0;
}
