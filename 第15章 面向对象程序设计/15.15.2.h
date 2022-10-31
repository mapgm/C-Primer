#include "15.15.1.h"

class Bulk_quote : public Disc_quote
{
public:
	Bulk_quote() = default;
	Bulk_quote(const std::string& b, double p, std::size_t q, double disc) :
		Disc_quote(b, p, q, disc) {   }
		
		double net_price(std::size_t n) const override;
		void  debug() const override;
};
