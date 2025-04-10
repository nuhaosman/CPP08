#include "MutantStack.hpp"


template<typename T>
MutantStack<T>::MutantStack()
{

}


template<typename T>
MutantStack<T>::MutantStack(const MutantStack& src) : std::stack<T>(src)
{
    *this = src;
}

template<typename T>
MutantStack<T>& MutantStack<T>::operator=(const MutantStack<T>& src)
{
	if (this != &src)
	{
		this->c = src.c;
	}
	return (*this);
}


template<typename T>
MutantStack<T>::~MutantStack()
{

}


template<typename T>
typename MutantStack<T>::iterator MutantStack<T>::begin()
{
	return (this->c.begin());
}


template<typename T>
typename MutantStack<T>::iterator MutantStack<T>::end()
{
	return (this->c.end());
}


template<typename T>
typename MutantStack<T>::const_iterator MutantStack<T>::begin() const
{
	return (this->c.begin());
}


template<typename T>
typename MutantStack<T>::const_iterator MutantStack<T>::end() const
{
	return (this->c.end());
}

