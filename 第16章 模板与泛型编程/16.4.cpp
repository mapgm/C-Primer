template<typename Iterator, typename Value>
Iterator find(Iterator first, Iterator last, const Value& v)
{
	for ( ; first != last && *first != value; ++first);
	return first;
}
