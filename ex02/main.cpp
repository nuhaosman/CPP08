#include "MutantStack.hpp"

int subject_test()
{
	MutantStack<int> mstack;
	mstack.push(5);
	mstack.push(17);
	std::cout << mstack.top() << std::endl;
	mstack.pop();
	std::cout << mstack.size() << std::endl;
	mstack.push(3);
	mstack.push(5);
	mstack.push(737);
	//[...]
	mstack.push(0);
	MutantStack<int>::iterator it = mstack.begin();
	MutantStack<int>::iterator ite = mstack.end();
	++it;
	--it;
	while (it != ite)
	{
		std::cout << *it << std::endl;
		++it;
	}
	std::stack<int> s(mstack);
	return 0;
}

void Additional_test()
{

// Base test
	std::cout << "\n______________________________________________________" << std::endl;
	MutantStack<int> mStack;
	mStack.push(1);
	mStack.push(2);
	mStack.push(3);
	std::cout << YELLOW "Elements in MutantStack: " CloseColor;
	for (MutantStack<int>::iterator it = mStack.begin(); it != mStack.end(); ++it)
	{
		std::cout << *it << " ";
	}
	std::cout << std::endl;
	const MutantStack<int> constStack = mStack;
	std::cout << YELLOW "Elements in const MutantStack: " CloseColor;
	for (MutantStack<int>::const_iterator it = constStack.begin(); it != constStack.end(); ++it)
	{
		std::cout << *it << " ";
	}
	std::cout << std::endl;

// Test with int
	std::cout << "\n______________________________________________________" << std::endl;
	std::cout << YELLOW "\nTesting with int:\nIterating using non-const iterator:" << CloseColor << std::endl;
	MutantStack<int> intStack;
	intStack.push(42);
	intStack.push(-1);
	intStack.push(2024);
	intStack.push(0);
	for (MutantStack<int>::iterator it = intStack.begin(); it != intStack.end(); ++it)
	{
		std::cout << " [" << *it << "]";
	}
	std::cout << std::endl << YELLOW "Iterating using const_iterator:" << CloseColor << std::endl;
	for (MutantStack<int>::const_iterator cit = intStack.begin(); cit != intStack.end(); ++cit)
	{
		std::cout << " [" << *cit << "]";
	}


// Test with std::string
	std::cout << "\n______________________________________________________" << std::endl;
	std::cout << std::endl << YELLOW "Testing with std::string\nAll elements:" << CloseColor;
	MutantStack<std::string> stringStack;
	stringStack.push("Check out");
	stringStack.push("How my");
	stringStack.push("MutantStack");
	stringStack.push("is");
	stringStack.push("awesome!");
	for (MutantStack<std::string>::const_iterator it = stringStack.begin(); it != stringStack.end(); ++it)
		std::cout << *it << " ";
	std::cout << std::endl;
	std::cout << YELLOW "Top element: " CloseColor << stringStack.top() << std::endl;
	stringStack.pop();
	std::cout << YELLOW "Top after pop: " CloseColor << stringStack.top();


// Test with float
	std::cout << "\n______________________________________________________" << std::endl;
	std::cout << std::endl << YELLOW "Testing with float\nAll elements:" << CloseColor;
	MutantStack<float> floatStack;
	floatStack.push(3.14f);
	floatStack.push(1.618f);
	floatStack.push(2.718f);
	floatStack.push(1.414f);
	for (MutantStack<float>::iterator it = floatStack.begin(); it != floatStack.end(); ++it)
		std::cout << " [" << *it << "]";
	std::cout << YELLOW "\nIterating backwards:" CloseColor;
	MutantStack<float>::iterator ite = floatStack.end();
	MutantStack<float>::iterator itb = floatStack.begin();
	while (ite != itb)
	{
		--ite;
		std::cout << " [" << *ite << "]";
	}


// Test empty stack
	std::cout << "\n______________________________________________________" << std::endl;
	std::cout << std::endl << YELLOW "Testing with empty MutantStack<int>\n" << CloseColor;
	MutantStack<int> emptyStack;
	std::cout << YELLOW "Is stack empty? " CloseColor;
	if (emptyStack.empty())
		std::cout << "Yes\n";
	else
		std::cout << "No, it has some elements in it\n";


// Copy constructor and assignment operator
	std::cout << "\n______________________________________________________" << std::endl;
	std::cout << std::endl << YELLOW "Testing copy and assignment\n" << CloseColor;;
	MutantStack<int> copiedStack = intStack;
	MutantStack<int> assignedStack;
	assignedStack = intStack;
	std::cout << YELLOW "Copied stack size: " CloseColor << copiedStack.size() << std::endl;
	std::cout << YELLOW "Assigned stack size: " CloseColor << assignedStack.size() << std::endl;
}

int main()
{

	subject_test();
	Additional_test();
	return 0;
}
