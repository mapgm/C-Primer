#include <string>

class HasPtr {
public:
	HasPtr(const std::string &s = std::string()) : ps(new std::string(s)), i(0) { }
	HasPtr(const HasPtr &hp) : ps(new std::string(*hp.ps)), i(hp.i) { } // 拷贝构造函数
	HasPtr& operator=(const HasPtr &rhs_hp) { // 拷贝赋值运算符
		if(this != &rhs_hp){
			std::string *temp_ps = new std::string(*rhs_hp.ps);
			delete ps;
			ps = temp_ps;
			i = rhs_hp.i;
		}
		return *this;
	}
private:
	std::string *ps;
	int i;
};

int main()
{
	return 0;
}
