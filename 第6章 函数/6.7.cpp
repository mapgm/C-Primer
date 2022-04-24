#include <iostream>

using namespace std;

int count_add() 
{
	static int ctr = 0; 
	return ctr ++;
}

int main()
{
	for (int i = 0; i != 10; ++ i) 
		cout << count_add() << endl;
	
	return 0;
}
