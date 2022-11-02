#include <iostream>
#include <string>


void calculateResult(double &numberOne, double &numberTwo, double &result, char &inputOperator)
{
	switch (inputOperator)
	{
		case '+':
			result = numberOne + numberTwo;
			break;
		case '-':
			result = numberOne - numberTwo;
			break;
		case '*':
			result = numberOne * numberTwo;
			break;
		case '/':
			result = numberOne / numberTwo;
			break;
		default:
			std::cout << "Invalid Operator " + inputOperator << std::endl;
			break;
	}
}

int main()
{
	double numberOne, numberTwo, result;
	char inputOperator;

	std::cout << std::fixed;
	
	while (true)
	{
		std::cout << "Number One: ";
		std::cin >> numberOne;

		std::cout << "Operator (+, -, *, /): ";
		std::cin >> inputOperator;

		std::cout << "Number Two: ";
		std::cin >> numberTwo;

		if (std::cin.fail())
		{
			std::cout << std::endl << "Invalid input" << std::endl << std::endl;
			std::cin.clear();
			std::cin.ignore();
		}
		else
		{
			calculateResult(numberOne, numberTwo, result, inputOperator);
			std::cout << "Result: " << result << std::endl << std::endl;
		}
	}
	return 0;
}
