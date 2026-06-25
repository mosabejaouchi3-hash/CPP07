#include <iostream>
#include "Array.hpp"

int main() {
	try {
		std::cout << "--- 1. Creating an array of 5 elements ---" << std::endl;
		Array<int> numbers(5);
		
		for (unsigned int i = 0; i < numbers.size(); i++)
			numbers[i] = (i + 1) * 10;

		std::cout << "Original numbers: ";
		for (unsigned int i = 0; i < numbers.size(); i++)
			std::cout << numbers[i] << " ";

		std::cout << "\n\n";

		std::cout << "--- 2. Testing Deep Copy (Copy Constructor & Assignment) ---" << std::endl;
		Array<int> copyNumbers = numbers;
		
		int &x = copyNumbers[0];
		x = 999;

		std::cout << "Original numbers[0] after modifying copy: " << numbers[0] << " (Should be 10)" << std::endl;
		std::cout << "Copy numbers[0]: " << copyNumbers[0] << " (Should be 999)" << std::endl;
		std::cout << "\n";

		std::cout << "--- 3. Testing Out of Bounds Exception ---" << std::endl;
		std::cout << "Trying to access index 5..." << std::endl;
		std::cout << numbers[5] << std::endl;

	}
	catch (const std::exception& e) {
		std::cout << "Success! Exception caught: Index out of bounds." << std::endl;
	}

	return 0;
}