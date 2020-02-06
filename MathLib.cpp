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
	long ceilingVal = (long) val;
	if(ceilingVal-val != 0) {
		if(ceilingVal >= 0) {
			return ceilingVal + 1;
		}
	}
	return ceilingVal;
}


long floor(double val) {
	long floorVal = (long) val;
	if(floorVal-val != 0) {
		if(floorVal < 0) {
			return floorVal - 1;
		}
	}
	return floorVal;
}


// TODO
long round(double val, RoundingRule rule) {
	long roundedVal = 0;
	long signFunc = 0;
	if (val < 0) { 
		signFunc = -1;
	} else if (val > 0) {
		signFunc = 1;
	}

	switch (rule)
	{
		case ROUND_DOWN:
				roundedVal = floor(val);
				break;
		case ROUND_UP:
				roundedVal = ceiling(val);
				break;
		case ROUND_TO_ZERO:
				roundedVal = ((-1) * signFunc) * ceiling((-1) * absVal(val));
				break;
		case ROUND_AWAY_ZERO:
				roundedVal = ((-1) * signFunc) * floor((-1) * absVal(val));
				break;
		case ROUND_HALF_UP:
				roundedVal = floor(val + 0.5);
				break;
		case ROUND_HALF_DOWN:
				roundedVal = ceiling(val - 0.5);
				break;
		case ROUND_HALF_TO_ZERO:
				cout << "It was ROUND_HALF_TO_ZERO" << endl;
				break;
		case ROUND_HALF_AWAY_ZERO:
				cout << "It was ROUND_HALF_AWAY_ZERO" << endl;
				break;
		case ROUND_HALF_TO_EVEN:
				cout << "It was ROUND_HALF_TO_EVEN" << endl;
				break;
		case ROUND_HALF_TO_ODD:
				cout << "It was ROUND_HALF_TO_ODD" << endl;
				break;
		default:
			cout << "None specified default is ROUND_DOWN" << endl;
			roundedVal = floor(val);
			break;
	}

	return roundedVal;
}


double pow(double val, long exponent) {
	double total = 1;
	long tempExpo = absVal(exponent);
	while(tempExpo != 0) {
		total *= val;
		tempExpo--;
	}
	if(exponent < 0) {
		total = (1/total);
	}
	return total;
}

// TODO
string toString(int num, int unsigned radix, bool hasUpperCase) {
	string str = "";
	if(radix > 36) {
		return "Radix too large.";
	}

	return "fix this";
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
			val1 -= val2;
		} else {
			val2 -= val1;
		}
	}

	gcd = val1;

	return gcd;
}
