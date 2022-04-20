#include <iostream>
#include <cstring>

using std::cout;
using std::endl;

// C-Style character strings
const char cstr1[] = "Hello";
const char cstr2[] = "world!";

int main()
{
	constexpr size_t new_size = strlen(cstr1) + strlen(" ") + strlen(cstr2) +1;
	
	char cstr3[new_size];
	
	strcpy(cstr3, cstr1); // copy
	strcat(cstr3, " "); // attach
	strcat(cstr3, cstr2);
	
	cout << cstr3 << endl;
	
	return 0;
}
