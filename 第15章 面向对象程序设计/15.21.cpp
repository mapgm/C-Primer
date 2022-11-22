#include <iostream>
#include <string>

class Shape // Shape��
{
public:
	typedef std::pair<double, double>    Coordinate;
	
	Shape() = default; // Ĭ�Ϲ��캯����ʹ��ϵͳ�Լ�����ģ�
	Shape(const std::string& n) : // �������캯��
		name(n) { }
		
	virtual double area()       const = 0; // �麯��
	virtual double perimeter()  const = 0; // �麯��
		
	virtual ~Shape() = default; // ����������
private:
	std::string name;
};

class Rectangle : public Shape // �����̳�
{
public:
	Rectangle() = default; // Ĭ�Ϲ��캯��
	Rectangle(const std::string& n,
		const Coordinate& a,
		const Coordinate& b,
		const Coordinate& c,
		const Coordinate& d) :
		Shape(n), a(a), b(b), c(c), d(d) { } // �������캯��
		
		~Rectangle() = default; // ��������
		
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
