#include "MyArray.h"

#include <ostream>

MyArray::MyArray(int size) : data(new int[size]), size(size) {}

MyArray::MyArray(const MyArray &src) : data{new int[src.size]}, size{src.size} {
    std::copy(src.data, src.data + src.size, data);
}

MyArray::~MyArray() {
    delete[] data;
}

std::ostream &operator<<(std::ostream &os, const MyArray &array) {
    os << "data: " << array.data << " *data: " << *array.data << " size: " << array.size;
    return os;
}
