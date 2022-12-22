template<typename T, typename N> constexpr
unsigned size(const T (&arr)[N])
{
	return N;
}
