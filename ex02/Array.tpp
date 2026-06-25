#include "Array.hpp"

template <typename T>
Array<T>::Array() : _array(NULL), _size(0) {}

template <typename T>
Array<T>::Array(unsigned int n) : _size(n) {
	if (n > 0)
		_array = new T[n]();
	else
		_array = NULL;
}

template <typename T>
Array<T>::Array(const Array<T>& other) {
	this->_size = other._size;
	if (this->_size > 0) {
		this->_array = new T[this->_size];
		for (unsigned int i = 0; i < this->_size; i++) {
			this->_array[i] = other._array[i];
		}
	} else {
		this->_array = NULL;
	}
}

template <typename T>
Array<T>::~Array() {
	delete[] _array;
}

template <typename T>
Array<T>& Array<T>::operator=(const Array<T>& other) {
	if (this != &other) {
		delete[] this->_array;

		this->_size = other._size;
		if (this->_size > 0) {
			this->_array = new T[this->_size];
			for (unsigned int i = 0; i < this->_size; i++) {
				this->_array[i] = other._array[i];
			}
		} else {
			this->_array = NULL;
		}
	}
	return *this;
}

template <typename T>
T& Array<T>::operator[](unsigned int index) {
	if (index >= _size) {
		throw std::exception();
	}
	return _array[index];
}

template <typename T>
const T& Array<T>::operator[](unsigned int index) const {
	if (index >= _size) {
		throw std::exception();
	}
	return _array[index];
}

template <typename T>
unsigned int Array<T>::size() const {
	return _size;
}

