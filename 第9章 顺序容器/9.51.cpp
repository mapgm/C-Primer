#include <iostream>
#include <string>
#include <vector>

using namespace std;

class My_date
{
private:
	unsigned year, month, day;
	
public:
	My_date(const string &s)
	{
		
		unsigned tag = 0, format = 0;
		
		// 1/1/1900
		if (s.find_first_of("/")!= string::npos)
		{
			format = 1;
		}
		
		// January 1, 1900 or Jan 1, 1900
		if (s.find(',') != string::npos)
		{
			format = 2;
		}
		
		// Jan 1 1900
		if (s.find(',') == string::npos && s.find('/') == string::npos)
		{ 
			format = 3;
			tag = 1;
		}
		
		if (format == 1)
		{
			day = stoi(s.substr(0, s.find_first_of("/")));
			month = stoi(s.substr(s.find_first_of("/") + 1, s.find_last_of("/")- s.find_first_of("/")));
			year = stoi(s.substr(s.find_last_of("/") + 1, 4));
		}
		else
		{
			if (s.find("Jan") != string::npos)  month = 1;
			if (s.find("Feb") != string::npos)  month = 2;
			if (s.find("Mar") != string::npos)  month = 3;
			if (s.find("Apr") != string::npos)  month = 4;
			if (s.find("May") != string::npos)  month = 5;
			if (s.find("Jun") != string::npos)  month = 6;
			if (s.find("Jul") != string::npos)  month = 7;
			if (s.find("Aug") != string::npos)  month = 8;
			if (s.find("Sep") != string::npos)  month = 9;
			if (s.find("Oct") != string::npos)  month = 10;
			if (s.find("Nov") != string::npos)  month = 11;
			if (s.find("Dec") != string::npos)  month = 12;
			
			char chr = ',';
			if (tag == 1) chr = ' ';
			day = stoi(s.substr(s.find_first_of("123456789"), s.find_first_of(chr) - s.find_first_of("123456789")));
			
			year = stoi(s.substr(s.size() - 4, 4));
		}
	}
	
	void print()
	{
		cout << "year: " << year << " " << "month: " << month << " " << "day:" << day << endl;
	}
};
int main()
{
	My_date a("Jan 2 1900");
	My_date b("February 3,2001");
	My_date c("Mar 4, 2102");
	My_date d("5/4/2203");
	
	a.print();
	b.print();
	c.print();
	d.print();
	
	return 0;
}
