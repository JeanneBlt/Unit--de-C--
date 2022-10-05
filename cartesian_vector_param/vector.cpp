#include <string>
#include "vector.hh"
#include "config.h"

using namespace std;
template <class T> // We can use this to avoid redifine data types in function

Vector::Vector() {
    this->arr = new int [0];
    this->capacity = 1;
    this->current = 0;
}

Vector::Vector(T tab) {
    if (current == capacity)  // In this case, we need to create a new array as we can't change the size of an array
}

Vector::~Vector() {
    delete [] this->arr;
}