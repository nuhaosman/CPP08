#include "Span.hpp"
// #include <cstdlib>
// #include <ctime>


void call_addNumber(Span& sp, int nb)
{
	try
	{
		sp.addNumber(nb);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
}
void call_multipleAdd(Span& sp, std::vector<int>::iterator begin, std::vector<int>::iterator end)
{
	try
	{
		sp.multipleAdd(begin, end);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
}

void call_span(Span& sp)
{
	try
	{
		int shrt = sp.shortestSpan();
		std::cout << "Shortest span is : " << shrt << std::endl;

	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	try
	{
		int lrg = sp.longestSpan();
		std::cout << "Longest span is : " << lrg << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
}

void Addition_test()
{
	srand(static_cast<unsigned int>(time(NULL)));

// Test(1): Suitable capacity
	Span Span_1_Suitable_Capacity(5);
	std::vector<int> temp_vec_1;
	temp_vec_1.push_back(1);
	temp_vec_1.push_back(2);
	temp_vec_1.push_back(3);
	temp_vec_1.push_back(4);
	temp_vec_1.push_back(5);
	call_multipleAdd(Span_1_Suitable_Capacity, temp_vec_1.begin(), temp_vec_1.end());
	std::cout << "Testing on Span of: ";
	Span_1_Suitable_Capacity.printvec();
	call_span(Span_1_Suitable_Capacity);
	std::cout << YELLOW "_____________________________________________" CloseColor << std::endl;
//Test(2): Exceeding capacity
	Span Span_2_Exceeding_Capacity(5);
	std::vector<int> tooManyNumbers;
	tooManyNumbers.push_back(1);
	tooManyNumbers.push_back(2);
	tooManyNumbers.push_back(3);
	tooManyNumbers.push_back(4);
	tooManyNumbers.push_back(5);
	tooManyNumbers.push_back(6);
	std::cout << "Testing to fill 6 numbers in a Span of size 5 \n";
	call_multipleAdd(Span_2_Exceeding_Capacity, tooManyNumbers.begin(), tooManyNumbers.end()); // Expects to catch and report an exception
	std::cout << YELLOW "_____________________________________________" CloseColor << std::endl;


// Test(3):
	Span Span_3(10);
	std::vector<int> numbersForCalc;
	numbersForCalc.push_back(0);
	numbersForCalc.push_back(-100);
	numbersForCalc.push_back(5);
	numbersForCalc.push_back(20);
	numbersForCalc.push_back(100);
	call_multipleAdd(Span_3, numbersForCalc.begin(), numbersForCalc.end());
	std::cout << "Testing on Span of: ";
	Span_3.printvec();
	call_span(Span_3);
	std::cout << YELLOW "_____________________________________________" CloseColor << std::endl;


// Test(4): same number
	Span Span_4_Same_Number(2);
	call_addNumber(Span_4_Same_Number, 100);
	call_addNumber(Span_4_Same_Number, 100);
	std::cout << "Testing on Span of: ";
	Span_4_Same_Number.printvec();
	call_span(Span_4_Same_Number);
	std::cout << YELLOW "_____________________________________________" CloseColor << std::endl;


// Test(5): one number
	Span Span_5_one_number(1);
	call_addNumber(Span_5_one_number, 42);
	std::cout << "Testing on Span of: ";
	Span_5_one_number.printvec();
	call_span(Span_5_one_number);
	std::cout << YELLOW "_____________________________________________" CloseColor << std::endl;


// Test(6): 15k number
	std::vector<int> Large_Vec;
	for (size_t i = 0; i < 15000; ++i)
		Large_Vec.push_back(rand());
	Span Span_6_Large_Span(Large_Vec.size());
	call_multipleAdd(Span_6_Large_Span, Large_Vec.begin(), Large_Vec.end());
	std::cout << "Testing on "<< Large_Vec.size() <<" nbers range: [" << *std::min_element(Large_Vec.begin(), Large_Vec.end()) << "] ... [" << *std::max_element(Large_Vec.begin(), Large_Vec.end()) <<"]\n";
	call_span(Span_6_Large_Span);
	std::cout << YELLOW "_____________________________________________" CloseColor << std::endl;


// Test(7): All negative numbers
	Span Span_7_All_Negative(10);
	std::vector<int> temp_vec_2;
	temp_vec_2.push_back(-100);
	temp_vec_2.push_back(-5);
	temp_vec_2.push_back(-20);
	temp_vec_2.push_back(-100);
	call_multipleAdd(Span_7_All_Negative, temp_vec_2.begin(), temp_vec_2.end());
	std::cout << "Testing on Span of: ";
	Span_7_All_Negative.printvec();
	call_span(Span_7_All_Negative);
	std::cout << YELLOW "_____________________________________________" CloseColor << std::endl;
}

int Subject_test()
{
	std::cout << YELLOW "_____________________________________________" CloseColor << std::endl;
	Span sp = Span(5);
	sp.addNumber(6);
	sp.addNumber(3);
	sp.addNumber(17);
	sp.addNumber(9);
	sp.addNumber(11);
	std::cout << sp.shortestSpan() << std::endl;
	std::cout << sp.longestSpan() << std::endl;
	std::cout << YELLOW "_____________________________________________" CloseColor << std::endl;
	return(0);
}


int main()
{
	std::cout << "Subject tests\n";
	Subject_test();
	std::cout << "Addition tests\n";
	Addition_test();
}
