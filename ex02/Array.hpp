#include <iostream>


template <typename T>
class Array
{
private:

	T *Array
	unsigned int _size;

public:
	Array();
	Array(unsigned int n);
	Array(const Array &other);
	Array& operator=(const Array &other);
	~Array();

	unsigned int size() const;
	T	operator[](unsigned int index);
};

