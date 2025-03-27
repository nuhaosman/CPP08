#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

# include <iostream>
# include <stack>
# define YELLOW "\033[34m"
# define RED "\033[35m"
# define CloseColor  "\033[0m"

template<typename T>
class MutantStack : public std::stack<T>
{
public:
	MutantStack();
	MutantStack(const MutantStack& src);
	MutantStack<T>& operator=(const MutantStack<T>& src);
	~MutantStack();

	typedef typename std::stack<T>::container_type under_ctr;
	typedef typename under_ctr::iterator iterator;
	typedef  typename under_ctr::const_iterator const_iterator;

	iterator begin();
	iterator end();
	const_iterator begin() const;
	const_iterator end() const;
};

# include "MutantStack.tpp"

#endif
