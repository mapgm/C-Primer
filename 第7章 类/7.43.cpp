#include <iostream>

using namespace std;

class NoDefault 
{
public:
	NoDefault(int i) { }
};

class C 
{
public:
	C() : def(0) { } 
private:
	NoDefault def;
};

int main()
{
	C c;
	return 0;
}
