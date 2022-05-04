#include <iostream>

using namespace std;

int main()
{
	auto f = [](int x, int y){return x + y;};
	
	cout << f(1, 2) << endl;
	
	return 0;
}
