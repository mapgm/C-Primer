#include <iostream>

using namespace std;

void swap(int*& lft, int*& rht)
{
	auto tmp = lft;
	lft = rht;
	rht = tmp;
}

int main()
{
	int i = 42, j = 99;
	
	auto lft = &i;
	auto rht = &j;
	
	swap(lft, rht);
	
	cout << *lft << " " << *rht << endl;
	
	return 0;
}
