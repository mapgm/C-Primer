#include <iostream>
#include <vector>
#include <fstream>

using namespace std;

void ReadFileToVec(const string& fileName, vector<string>& vec)
{
	ifstream ifs(fileName);
	if (ifs)
	{
		string buf;
		while (getline(ifs, buf))
			vec.push_back(buf);
	}
}

int main()
{
	return 0;
}
