#include <iostream>

class Array
{
private:
int* arr;
int size;
public:
    Array(size_t size);
    Array(const Array& other);
    ~Array();

    Array operator=(const Array& other);
    int& operator[](size_t index);
    const int& operator[](size_t index) const;
};