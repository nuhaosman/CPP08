template<typename T>
typename T::iterator easyfind(T& ctr, int n)
{
	typename T::iterator found = find(ctr.begin(), ctr.end(), n);
	if (found != ctr.end())
			return (found);
	throw std::logic_error("no occurrence found");
}


template <typename Container>
void printContainer(const Container& container)
{
	typename Container::const_iterator i;
	for (i = container.begin(); i != container.end(); ++i)
	{
		std::cout << *i << " , ";
	}
	std::cout << std::endl;
}
