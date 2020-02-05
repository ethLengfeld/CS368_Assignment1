////////////////////////////////////////////////////////////////////////////////
// Main File: MathLib.cpp, demo.cpp
// This File: MathLib.cpp
// Other Files: 	 MathLib.h / MathLib.cpp / demo.cpp / Makefile / README.md
// Semester:         CS 368 Spring 2020
//
// Author:           Ethan Lengfeld
// Email:            elengfeld@wisc.edu
// CS Login:         lengfeld
//
//
// Online sources:   https://en.wikipedia.org/wiki/Rounding
//
////////////////////////////////////////////////////////////////////////////////

#include "MathLib.h"

int absVal(int val) {
	if(val < 0) {
		val = val * (-1);
	}
	return val;
}

double absVal(double val) {
	if(val < 0) {
		val = val * (-1);
	}
	return val;
}

long absVal(long val) {
	if(val < 0) {
		val = val * (-1);
	}
	return val;
}

// TODO
long ceiling(double val) {
	long ceilingVal = (long) val + 1;

	return ceilingVal;
}

// TODO
long floor(double val) {
	long floorVal = (long) val;
	return floorVal;
}

// TODO
long round(double val, RoundingRule rule) {

	return val;
}

// TODO
double pow(double val, long exponent) {
	double total = 1;

	if (exponent < 0) {
		while(exponent != 0) {
			total *= (1 / val);
			exponent++;
		}
		return total;
	} else {
		while(exponent != 0) {
			total *= val;
			exponent--;
		}
	}
	return total;
}

// TODO
string toString(int num, int unsigned radix, bool hasUpperCase) {
	string str = "";
	if(radix > 36) {
		return "Radix too large.";
	}

	return 0;
}

int gcd(int val1, int val2) {
	val1 = absVal(val1);
	val2 = absVal(val2);

	if(val1 == val2) {
		return val1;
	}

	int gcd = 1;
	while(val1 != val2) {
		if(val1 > val2) {
			val1 = val1 - val2;
		} else {
			val2 = val2 - val1;
		}
	}

	gcd = val1;

	return gcd;
}
