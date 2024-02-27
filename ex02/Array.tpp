#ifndef ARRAY_TPP
#define ARRAY_TPP

template <typename T>
Array<T>::Array() : elements(nullptr), _size(0) {}

template <typename T>
Array<T>::Array(unsigned int n) : _size(n) {
    elements = new T[n];
    for (unsigned int i = 0; i < n; ++i) {
        elements[i] = T(); // Default-initialize each element
    }
}

template <typename T>
Array<T>::Array(const Array& other) : _size(other._size) {
    elements = new T[_size];
    for (unsigned int i = 0; i < _size; ++i) {
        elements[i] = other.elements[i];
    }
}

template <typename T>
Array<T>& Array<T>::operator=(const Array& other) {
    if (this != &other) { // Protect against self-assignment
        delete[] elements;
        _size = other._size;
        elements = new T[_size];
        for (unsigned int i = 0; i < _size; ++i) {
            elements[i] = other.elements[i];
        }
    }
    return *this;
}

template <typename T>
Array<T>::~Array() {
    delete[] elements;
}

// Subscript operator
template <typename T>
T& Array<T>::operator[](unsigned int index) {
    if (index >= _size) {
        throw std::out_of_range("Index out of range");
    }
    return elements[index];
}

// Size member function
template <typename T>
unsigned int Array<T>::size() const {
    return _size;
}

#endif
