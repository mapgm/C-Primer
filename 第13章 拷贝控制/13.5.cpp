#include <string>

class HasPtr {
public:
	HasPtr(const std::string &s = std::string()) : ps(new std::string(s)), i(0) { }
	HasPtr(const HasPtr& hp) : ps(new std::string(*hp.ps)), i(hp.i) { } // ¿½±´¹¹Ôìº¯Êý
private:
	std::string *ps;
	int i;
};

int main()
{
	return 0;
}
