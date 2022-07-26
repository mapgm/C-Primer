#include <string>

class HasPtr {
public:
	HasPtr(const std::string &s = std::string()) : ps(new std::string(s)), i(0) { }
	HasPtr(const HasPtr &hp) : ps(new std::string(*hp.ps)), i(hp.i) { } // 拷贝构造函数
	HasPtr& operator=(const HasPtr &hp) { // 拷贝赋值运算符
		std::string *new_ps = new std::string(*hp.ps);
		delete ps;
		ps = new_ps;
		i = hp.i;
		return *this;
	}
	~HasPtr() { // 析构函数
		delete ps;
	}
private:
	std::string *ps;
	int i;
};

int main()
{
	return 0;
}
