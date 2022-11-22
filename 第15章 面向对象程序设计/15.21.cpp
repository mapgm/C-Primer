#include <iostream>
#include <string>

class Shape // Shape类
{
public:
	typedef std::pair<double, double>    Coordinate;
	
	Shape() = default; // 默认构造函数（使用系统自己定义的）
	Shape(const std::string& n) : // 参数构造函数
		name(n) { }
		
	virtual double area()       const = 0; // 虚函数
	virtual double perimeter()  const = 0; // 虚函数
		
	virtual ~Shape() = default; // 虚析构函数
private:
	std::string name;
};

class Rectangle : public Shape // 公共继承
{
public:
	Rectangle() = default; // 默认构造函数
	Rectangle(const std::string& n,
		const Coordinate& a,
		const Coordinate& b,
		const Coordinate& c,
		const Coordinate& d) :
		Shape(n), a(a), b(b), c(c), d(d) { } // 参数构造函数
		
		~Rectangle() = default; // 析构函数
		
protected:
	Coordinate  a;
	Coordinate  b;
	Coordinate  c;
	Coordinate  d;
};

class Square : public Rectangle 
{
public:
	Square() = default;
	Square(const std::string& n,
		const Coordinate& a,
		const Coordinate& b,
		const Coordinate& c,
		const Coordinate& d) :
		Rectangle(n, a, b, c, d) { }
		
		~Square() = default;
};


int main()
{
	return 0;
}
