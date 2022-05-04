#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
	
	int i = 7;
	auto check_and_decrement = [&i]() -> bool {if (i > 0) {--i;return false;} else {return true;}};
	//auto check_and_decrement = [&i](){return i > 0 ? !(i--) : !i;};
	
	while(!check_and_decrement())
		cout << i << " ";
	cout << endl;
	
	return 0;
}
