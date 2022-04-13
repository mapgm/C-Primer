#include<iostream>
int main()
{
	int i = 0, &r = i;
	
	//相同，都是int类型
	auto a = i;
	decltype(i) b = i;
	
	//不同，c 是一个int类型，而d 是一个 int&
	auto c = r;
	decltype(r) d = r;
	
	return 0;
}
