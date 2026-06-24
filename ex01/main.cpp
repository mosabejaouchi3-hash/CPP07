#include <iostream>
#include <string>
#include "iter.hpp"

template <typename T>
void printElement(const T& element) {
    std::cout << element << " ";
}

void incrementElement(int& element) {
    element += 1;
}

void toUpperElement(char& element) {
    if (element >= 'a' && element <= 'z') {
        element = element - ('a' - 'A');
    }
}

int main() {
    std::cout << "=================== TEST 1: Non-Const Int Array ===================" << std::endl;
    int intArray[] = {1, 2, 3, 4, 5};
    size_t intLen = sizeof(intArray) / sizeof(intArray[0]);

    std::cout << "Original array: ";
    ::iter(intArray, intLen, printElement<int>);
    std::cout << std::endl;

    std::cout << "Applying incrementElement..." << std::endl;
    ::iter(intArray, intLen, incrementElement);

    std::cout << "Modified array: ";
    ::iter(intArray, intLen, printElement<int>);
    std::cout << "\n" << std::endl;


    std::cout << "=================== TEST 2: Const String Array ===================" << std::endl;
    const std::string strArray[] = {"Hello", "42", "Khouribga", "Network"};
    size_t strLen = sizeof(strArray) / sizeof(strArray[0]);

    std::cout << "Const String array elements: ";
    ::iter(strArray, strLen, printElement<std::string>);
    std::cout << "\n" << std::endl;


    std::cout << "=================== TEST 3: Non-Const Char Array ===================" << std::endl;
    char charArray[] = {'m', 'o', 's', 'a', 'b'};
    size_t charLen = sizeof(charArray) / sizeof(charArray[0]);

    std::cout << "Original chars: ";
    ::iter(charArray, charLen, printElement<char>);
    std::cout << std::endl;

    std::cout << "Applying toUpperElement..." << std::endl;
    ::iter(charArray, charLen, toUpperElement);

    std::cout << "Modified chars: ";
    ::iter(charArray, charLen, printElement<char>);
    std::cout << std::endl;

    return 0;
}
