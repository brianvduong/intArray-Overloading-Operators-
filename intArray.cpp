//  Program #5
//  intArray overloading operators lab.
//  CS320
//  11/18/19
//  Brian Duong cssc0474


#include <iostream>
#include "intArray.h"

using namespace std;

// Overloaded ctors
IntArray::IntArray(){  // IntArray with no parameters
    size = 10;
    pA = new int[size];
    hi = 9;
    lo = 0;
}
IntArray::IntArray(int arraySize){  // IntArray y(size)
    if(arraySize <= 0){
        std::cout << "Illegal size declaration. Program halted" << std::endl;   //size is less than 0
    }
    size = arraySize;
    pA = new int[size];
    hi = arraySize - 1;
    lo = 0;
}
IntArray::IntArray(int lowerIndex, int upperIndex){  // IntArray x(lowerIndex,upperIndex)
    lo = lowerIndex;
    hi = upperIndex;
    size = (hi - lo) + 1;
    if(lowerIndex > upperIndex){    //illegal case when hi < lo
        std::cout << "Illegal index declaration. Program halted" << std::endl;
    }
    else if(size > 0){  //normal case
        pA = new int[size];
    }
    else{
        pA = NULL;
    }
}

IntArray::IntArray(const IntArray& intA){  // IntArray w(anotherIntArray)
    size = intA.size;
    pA = new int[intA.size];
    hi = intA.hi;
    lo = intA.lo;
    for(int i = 0; i < size; i++){
        pA[i] = intA.pA[i];
    }
}

IntArray::~IntArray(){  // Destructor
    delete [] pA;
}

//Overloaded operators
int IntArray::operator==(const IntArray& intA){ //0 is false, 1 is true
    if (size == intA.size){
        for (int i = 0; i < size; i++){
            if (pA[i] != intA.pA[i]){   // returns 0 when not equal
                return 0;   
            }
        }
    } 
    else{
        return 0;
    }
    return 1;   //returns 1 otherwise
}

int IntArray::operator!=(const IntArray& intA){ //0 is false, 1 is true
    if (size == intA.size){
        for (int i = 0; i < size; i++){
            if (pA[i] == intA.pA[i]){   //returns 0 when equal
                return 0;
            }
        }
    } 
    else{
        return 0;
    }
    return 1;   //returns 1 otherwise
}

int& IntArray::operator[] (int i){
    int trueIndex = i - lo;
    if (trueIndex < 0 || trueIndex >= size) {
        return pA[0];
    }
    return pA[trueIndex];
}   

IntArray& IntArray::operator=(const IntArray& intA){
    if (size == intA.size){     // if size is same for both arrays
		for (int i = 0; i <= size; i++){
			pA[i] = intA.pA[i];
		}
	}
    else{
        std::cout << "Illegal assignment. Program halted" << std::endl;
    }
    return *this;
}    

IntArray IntArray::operator+(const IntArray& intA){
    IntArray sum(intA.size);    // new array to return at end
	if (size == intA.size){
		for (int i = 0; i < size; i++){
			sum[i] = pA[i] + intA.pA[i];
		}
	}
    return sum;
}

IntArray& IntArray::operator+=(const IntArray& intA){
    if(size == intA.size){  // no need for new array, assigns to left side
        for(int i = 0; i <= size; i++){
            pA[i] += intA.pA[i];
        }
        return *this;
    }
    return *this;
}

ostream& operator<<(ostream& os, const IntArray& intA){
    for (int i = 0; i < intA.size; i++) {
		os << intA.name << "[" << (i + intA.lo) << "] = " << intA.pA[i] << std::endl;
	}
	return os;
}

// Helper functions
void IntArray::setName(const char *name){
    this->name = name;
}

void IntArray::getName(){
    std::cout << name << std::endl;
}

int IntArray::high(){
    return hi;
}

int IntArray::low(){
    return lo;
}