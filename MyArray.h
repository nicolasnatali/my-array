#ifndef MY_ARRAY_MYARRAY_H
#define MY_ARRAY_MYARRAY_H

#include <ostream>

class MyArray {
public:
    explicit MyArray(int size);

    MyArray(const MyArray &src);

    virtual ~MyArray();

    friend std::ostream &operator<<(std::ostream &os, const MyArray &array);

private:
    int *data;
    int size;
};

#endif //MY_ARRAY_MYARRAY_H
