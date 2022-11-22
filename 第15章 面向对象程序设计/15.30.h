#include "quote.h"
#include <set>
#include <memory>

// ������
// a basket of objects from Quote hierachy, using smart pointers.
class Basket
{
public:
	// Basketʹ�úϳɵ�Ĭ�Ϲ��캯���Ϳ������Ƴ�Ա
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
	
	// ��ӡÿ������ܼۺ͹���������������ܼ�
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
	double sum = 0.0;  // ����ʵʱ��������ܼ۸�
	
	// iterָ��ISBN��ͬ��һ��Ԫ���еĵ�һ��
	// upper_bound����һ�����������õ�����ָ������Ԫ�ص�β��λ��?
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
