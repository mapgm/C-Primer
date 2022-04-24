#include <iostream>

using namespace std;

int count_add(int n) 
{
	static int ctr = 0; 
	ctr += n;
	return ctr;
}

int main()
{
	for (int i = 0; i != 10; ++ i) 
		cout << count_add(i) << endl;
	
	return 0;
}
