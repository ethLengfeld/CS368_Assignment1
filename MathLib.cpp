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

long ceiling(double val) {
	long ceilingVal = val;
	


	return ceilingVal;
}

long floor(double val) {
	long floorVal = val;

	return floorVal; 
}

long round(double val, RoundingRule rule) {

	return 0;
}

double pow(double val, long exponent) {

	return 0;
}

string toString(int num, int unsigned radix, bool hasUpperCase) {
	string str = "";
	if(radix > 36) {
		return "Radix too large.";
	}

	return 0;
}

int gcd(int val1, int val2) {

	return 0;
}
