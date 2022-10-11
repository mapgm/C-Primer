// StrVec(std::initializer_list<std::string>);

void StrVec::range_initialize(const std::string *first, const std::string *last)
{
	auto newdata = alloc_n_copy(first, last);
	elements = newdata.first;
	first_free = cap = newdata.second;
}

StrVec::StrVec(std::initializer_list<std::string> il)
{
	range_initialize(il.begin(), il.end());
}
