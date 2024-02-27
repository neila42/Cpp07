#include <iostream>
#include "main.hpp"

int main() {
    // int array
    int intArray[] = {1, 2, 3, 4, 5};
    size_t intArrayLength = sizeof(intArray) / sizeof(intArray[0]); //ex 20octet divisé par 4octet = 5int ou char

    std::cout << "Original integer array:" << std::endl;
    iter(intArray, intArrayLength, printElement);

    // au carre 
    std::cout << "Squaring integer array elements:" << std::endl;
    iter(intArray, intArrayLength, squareInt);

    std::cout << "Squared integer array:" << std::endl;
    iter(intArray, intArrayLength, printElement);

    // string array
    std::string stringArray[] = {"Hello", "World", "Template", "Function"};
    size_t stringArrayLength = sizeof(stringArray) / sizeof(stringArray[0]);

    std::cout << "String array:" << std::endl;
    iter(stringArray, stringArrayLength, printElement<std::string>);

    return 0;
}
