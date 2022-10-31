#include "15.3.h"

class Disc_quote : public Quote // 抽象基类
{
public:
	Disc_quote();
	Disc_quote(const std::string& b, double p, std::size_t q, double d) :
		Quote(b, p), quantity(q), discount(d)   { }
		
		virtual double net_price(std::size_t n) const override = 0; // 纯虚函数
		
protected:
	std::size_t quantity;
	double      discount;
};
