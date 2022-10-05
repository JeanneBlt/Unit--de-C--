#pragma once

#include <ostream>
#include <initializer_list>
#include <cassert>
#include "config.h"
#include "vector.cpp"

using namespace std;

class Vector
{
public:
    // DO NOT CHANGE THIS
    Vector(const Vector&) = default;
    Vector& operator=(const Vector&) = default;
    ~Vector() = default; // destructor
    //

    // Add suitable constructors
    Vector(); // default contructor, which create a null vector
    Vector(/*args*/); // parameterized constructor
    // possibly more

// Public Member functions here
    Vector& operator+=(const Vector& rhs);
    // More to go

private:
    // Private Member functions here (if necessary)

    // Member variables are ALWAYS private, and they go here
    T* arr;    // pointer
    int capacity; // capacity of the array
    int current; // current number of elements in the array
};

// Nonmember function operators go here