template<typename Container>
void print(const Container& c)
{
	for (auto it = c.begin(); it != c.end(); ++it)
		std::cout << *it << " ";
}
