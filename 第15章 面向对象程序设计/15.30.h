#include "quote.h"
#include <set>
#include <memory>

// 购物篮
// a basket of objects from Quote hierachy, using smart pointers.
class Basket
{
public:
	// Basket使用合成的默认构造函数和拷贝控制成员
	// copy verison
	void add_item(const Quote& sale)
	{
		items.insert(std::shared_ptr<Quote>(sale.clone()));
	}
	// move version
	void add_item(Quote&& sale)
	{
		items.insert(std::shared_ptr<Quote>(std::move(sale).clone()));
	}
	
	// 打印每本书的总价和购物篮中所有书的总价
	double total_receipt(std::ostream& os) const;
	
private:
	
	// function to compare needed by the multiset member
	static bool compare(const std::shared_ptr<Quote>& lhs,
		const std::shared_ptr<Quote>& rhs)
	{
		return lhs->isbn() < rhs->isbn();
	}
	
	// hold multiple quotes, ordered by the compare member
	std::multiset<std::shared_ptr<Quote>, decltype(compare)*>
	items{ compare };
};

double Basket::total_receipt(std::ostream &os) const
{
	double sum = 0.0;  // 保存实时计算出的总价格
	
	// iter指向ISBN相同的一批元素中的第一个
	// upper_bound返回一个迭代器，该迭代器指向这批元素的尾后位置?
	for (auto iter = items.cbegin(); iter != items.cend();
		iter = items.upper_bound(*iter))
		//  ^^^^^^^^^^^^^^^^^^^^^^^^^^^
		// @note   this increment moves iter to the first element with key
		//         greater than  *iter.
		
	{
		sum += print_total(os, **iter, items.count(*iter));
	}                                   // ^^^^^^^^^^^^^ using count to fetch
	// the number of the same book.
	os << "Total Sale: " << sum << std::endl;
	return sum;
}
