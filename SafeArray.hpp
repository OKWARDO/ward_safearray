#pragma once
#include<iostream>
#include<vector>
#include<fstream>
#include<algorithm>
#include<iterator>
#include<string>
#include<atlSafe.h>
#include<OleAuto.h>
#include<OAIdl.h>

using namespace std;

class SafeArray

{
	SafeArray::SafeArray(int lowerbound, int upperbound) {
		(lowerbound, upperbound);
	}
	SafeArray::~SafeArray(void)
	{
		delete[]m_array2;
		
	}


public:
	int*array2 = new int[upperbound - lowerbound + 1];

	
	
	int operator[](int index){
		return 0;
	}

	
private:
	int m_upper;
	int m_lower;
	int*m_array;
	int m_capacity;
	int lowerbound;
	int upperbound;
	int array[5];
protected:

	int*m_array2 = new int[m_capacity];
	
	 

	


	
	

};


class A {
	int m1;
	double m2;
};
template <typename W>
class Array {
public:
	Array(int numElements) {

		capacity = numElements;
		values = new W[capacity];
	}
	void SetElement(W v, int location) {
		if ((location > capacity - 1) || (location < 0))
			std::cout << " Index out of range error" << endl;
		return;
		values[location] = v;
	}
protected:
	W* values;
	int capacity;
};