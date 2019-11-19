// intArray.h
// Provided by instructor, CS320 Fall 2018

#ifndef _INTARRAY_H
#define _INTARRAY_H
#include <iostream>
#include <iomanip>
#include "string.h"         // warnings issued whether this or <string>
#include <fstream>          // necessary for external file ptr
#include <stdlib.h>

using std::ostream;

class IntArray {
    private:
        const char* name;       // array's name
        int* pA;                // dynamic array
        int size;               // size of array
        int hi;                 // largest index
        int lo;                 // smallest index
    public:
        // Overloaded ctors
        IntArray();                         // IntArray z
        IntArray(int );                     // IntArray y(size)
        IntArray(int, int);                 // IntArray x(lowerIndex,upperIndex)
        IntArray(const IntArray&);          // IntArray w(anotherIntArray)
        ~IntArray();                        // Destructor

        // Overloaded operators
        int operator==(const IntArray&);
        int operator!=(const IntArray&);
        int& operator[] (int);                                      
        IntArray& operator=(const IntArray&);                       
        IntArray operator+(const IntArray&);
        IntArray& operator+=(const IntArray&);
        friend ostream& operator<<(ostream&, const IntArray&);

        // Helper functions
        void setName(const char *name);
        void getName();
        int  high();
        int  low();
};

#endif