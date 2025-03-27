#ifndef SPAN_HPP
# define SPAN_HPP

#include <vector>
#include <algorithm>
#include <stdexcept>
#include <iostream>
#include <limits>
# define YELLOW "\033[35m"
# define CloseColor  "\033[0m"

class Span
{
private:
	std::vector<int> _vec;
	unsigned int _N;

public:
	Span(unsigned int n);
	~Span();
	Span(const Span& src);
	Span& operator=(const Span& src);

	void addNumber(int x);
	int shortestSpan() const;
	int longestSpan() const;

	void multipleAdd(std::vector<int>::iterator begin, std::vector<int>::iterator end);
	void printvec() const;
};

#endif
