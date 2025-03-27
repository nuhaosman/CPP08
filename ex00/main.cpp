#include "easyfind.hpp"
#include <vector>

int main(void)
{
	srand(static_cast<unsigned int>(time(NULL)));
	std::vector<int> vec;
	vec.push_back(10);
	vec.push_back(20);
	vec.push_back(30);
	vec.push_back(40);
	vec.push_back(50);
	std::cout<< YELLOW "_________________________________________________________" CloseColor <<std::endl;
	std::cout<<std::endl;
	std::cout << "Container contents: ";
	printContainer(vec);
	std::cout<< YELLOW "_________________________________________________________" CloseColor <<std::endl;
	std::cout << "\nTest: looking for 30 in the container\n";
	try
	{
		std::vector<int>::iterator result = easyfind(vec, 30);
		std::cout << "Found: " << *result << " in the container\n";
	}
	catch (std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}
	std::cout<< YELLOW "_________________________________________________________" CloseColor <<std::endl;
	std::cout << "\nTest: looking for 100 in the container\n";
	try
	{
		std::vector<int>::iterator result = easyfind(vec, 100);
		std::cout << "Found: " << *result << " in the container\n";
	}
	catch (std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}

	return 0;
}
