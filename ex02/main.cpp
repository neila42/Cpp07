#include "Array.hpp"

int main() {
    try {
        Array<int> intArray(5); // 5 int
         for (unsigned int i = 0; i < intArray.size(); ++i) {
            intArray[i] = i * 2; // initialise
            std::cout << intArray[i] << std::endl; // print
        }

        Array<int> copiedArray = intArray; // Test pour copy constructor
        copiedArray[0] = 100; // Modif sur copy
        std::cout << "Original first element: " << intArray[0] << std::endl; // devrais pas changer
        std::cout << "Copied first element: " << copiedArray[0] << std::endl; // devrais etre changé
    } catch (const std::exception& e) {
        std::cerr << "Exception caught: " << e.what() << std::endl;
    }

    return 0;
}
