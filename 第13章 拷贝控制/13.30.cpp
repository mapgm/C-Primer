#include <string>
#include <iostream>

class HasPtr {
public:
	friend void swap(HasPtr&, HasPtr&);
	HasPtr(const std::string &s = std::string()) : ps(new std::string(s)), i(0) { } // 参数构造函数
	HasPtr(const HasPtr &hp) : ps(new std::string(*hp.ps)), i(hp.i) { } // 拷贝构造函数
	HasPtr& operator=(const HasPtr &hp) { // 拷贝赋值运算符
		auto new_p = new std::string(*hp.ps);
		delete ps;
		ps = new_p;
		i = hp.i;
		return *this;
	}
	~HasPtr() { // 析构函数
		delete ps;
	} 
	
	void show() { std::cout << *ps << std::endl; }
private:
	std::string *ps;
	int i;
};

inline
void swap(HasPtr& lhs, HasPtr& rhs)
{
	using std::swap;
	swap(lhs.ps, rhs.ps);
	swap(lhs.i, rhs.i);
	std::cout << "call swap(HasPtr& lhs, HasPtr& rhs)" << std::endl;
}
