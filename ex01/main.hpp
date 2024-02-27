#include <iostream>

// Function de base template
template<typename T> void iter(T* array, size_t length, void (*func)(T&)) { //T& pour une fonction differente
    for (size_t i = 0; i < length; ++i) {
        func(array[i]);
    }
}

// Example de fonc que je peux utiliser avec
template<typename T> void printElement(T& element) {
    std::cout << element << std::endl;
}

// mm chose
void squareInt(int& n) {
    n *= n;
}
