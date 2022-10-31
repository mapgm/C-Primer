#include "15.3.h"

class Limit_quote : public Quote
{
public:
	Limit_quote(); // 默认构造函数
	// 参数构造函数
	Limit_quote(const std::string& b, double p, std::size_t max, double disc) :
		Quote(b, p), max_qty(max), discount(disc)
		{} 
	// 虚函数
	double net_price(std::size_t n) const override;
		
private:
	std::size_t max_qty = 0;
	double discount = 0.0;
};

double Limit_quote::net_price(std::size_t n) const
{
	if (n > max_qty)
		return max_qty * price * discount + (n - max_qty) * price;
	else
		return n * discount *price;
}

int main()
{
	return 0;
}
