////////////////////////////////////////////////////////////////////////////////
// Main File: MathLib.cpp, demo.cpp
// This File: demo.cpp
// Other Files: 	 MathLib.h / MathLib.cpp / demo.cpp / Makefile / README.md
// Semester:         CS 368 Spring 2020
//
// Author:           Ethan Lengfeld
// Email:            elengfeld@wisc.edu
// CS Login:         lengfeld
//
//
// Online sources:   https://www.geeksforgeeks.org/stdstringcompare-in-c/
//
////////////////////////////////////////////////////////////////////////////////

/**
 * This class will demo the functions defined in the Math Library
*/
#include "MathLib.h"

int main() {
	int noTests = 35;
	int noTestsPassed = 0;
	cout << "Here are the tests" << endl << endl;
	
	// Beginning Tests!
	// reuse these vars for testing
	int valInt = 0;
	int valInt1 = 0;
	double valDouble = 0;
	long valLong = 0;
	
	int resultInt = 0;
	double resultDouble = 0;
	long resultLong = 0;

	// absVal(int)
	cout << "Testing absVal(int)" << endl;
	valInt = -4;
	resultInt = MATHLIB::absVal(valInt);
	if(resultInt == 4) {
		noTestsPassed++;
		cout << "Test Passed!" << endl << endl;
	} else {
		cout << "Test Failed..." << endl << endl;
	}

	// absVal(double)
	cout << "Testing absVal(double)" << endl;
	valDouble = -13.1234;
	resultDouble = MATHLIB::absVal(valDouble);
	if(resultDouble == 13.1234) {
		noTestsPassed++;
		cout << "Test Passed!" << endl << endl;
	} else {
		cout << "Test Failed..." << endl << endl;
	}

	// // absVal(long)
	cout << "Testing absVal(long)" << endl;
	valLong = -100;
	resultLong = MATHLIB::absVal(valLong);
	if(resultLong == 100) {
		noTestsPassed++;
		cout << "Test Passed!" << endl << endl;
	} else {
		cout << "Test Failed..." << endl << endl;
	}

	// ceiling(double)
	cout << "Testing ceiling(double pos)" << endl;
	valDouble = 7.23;
	resultLong = MATHLIB::ceiling(valDouble);
	if(resultLong == 8) {
		noTestsPassed++;
		cout << "Test Passed!" << endl << endl;
	} else {
		cout << "Test Failed..." << endl << endl;
	}

	cout << "Testing ceiling(double neg)" << endl;
	valDouble = -7.23;
	resultLong = MATHLIB::ceiling(valDouble);
	if(resultLong == -7) {
		noTestsPassed++;
		cout << "Test Passed!" << endl << endl;
	} else {
		cout << "Test Failed..." << endl << endl;
	}

	// floor(double)
	cout << "Testing floor(double pos)" << endl;
	valDouble = 7.23;
	resultLong = MATHLIB::floor(valDouble);
	if(resultLong == 7) {
		noTestsPassed++;
		cout << "Test Passed!" << endl << endl;
	} else {
		cout << "Test Failed..." << endl << endl;
	}

	cout << "Testing floor(double neg)" << endl;
	valDouble = 7.23;
	resultLong = MATHLIB::floor(valDouble);
	if(resultLong == 7) {
		noTestsPassed++;
		cout << "Test Passed!" << endl << endl;
	} else {
		cout << "Test Failed..." << endl << endl;
	}


	// round(double, RoundingRule)
	RoundingRule rule = ROUND_DOWN;
	// ROUND_DOWN
	cout << "Testing round(doublePos, ROUND_DOWN)" << endl;
	valDouble = 7.23;
	rule = ROUND_DOWN;
	resultLong = MATHLIB::round(valDouble, rule);
	if(resultLong == 7) {
		noTestsPassed++;
		cout << "Test Passed!" << endl << endl;
	} else {
		cout << "Test Failed..." << endl << endl;
	}

	cout << "Testing round(doubleNeg, ROUND_DOWN)" << endl;
	valDouble = -17.23;
	rule = ROUND_DOWN;
	resultLong = MATHLIB::round(valDouble, rule);
	if(resultLong == -18) {
		noTestsPassed++;
		cout << "Test Passed!" << endl << endl;
	} else {
		cout << "Test Failed..." << endl << endl;
	}

	// ROUND_UP
	cout << "Testing round(doublePos, ROUND_UP)" << endl;
	valDouble = 7.23;
	rule = ROUND_UP;
	resultLong = MATHLIB::round(valDouble, rule);
	if(resultLong == 8) {
		noTestsPassed++;
		cout << "Test Passed!" << endl << endl;
	} else {
		cout << "Test Failed..." << endl << endl;
	}

	cout << "Testing round(doubleNeg, ROUND_UP)" << endl;
	valDouble = -1237.23;
	rule = ROUND_UP;
	resultLong = MATHLIB::round(valDouble, rule);
	if(resultLong == -1237) {
		noTestsPassed++;
		cout << "Test Passed!" << endl << endl;
	} else {
		cout << "Test Failed..." << endl << endl;
	}

	// ROUND_TO_ZERO
	cout << "Testing round(doubleNeg, ROUND_TO_ZERO)" << endl;
	valDouble = -7.23;
	rule = ROUND_TO_ZERO;
	resultLong = MATHLIB::round(valDouble, rule);
	if(resultLong == -7) {
		noTestsPassed++;
		cout << "Test Passed!" << endl << endl;
	} else {
		cout << "Test Failed..." << endl << endl;
	}

	cout << "Testing round(doublePos, ROUND_TO_ZERO)" << endl;
	valDouble = 7.23;
	rule = ROUND_TO_ZERO;
	resultLong = MATHLIB::round(valDouble, rule);
	if(resultLong == 7) {
		noTestsPassed++;
		cout << "Test Passed!" << endl << endl;
	} else {
		cout << "Test Failed..." << endl << endl;
	}

	// ROUND_AWAY_ZERO
	cout << "Testing round(doublePos, ROUND_AWAY_ZERO)" << endl;
	valDouble = 7.23;
	rule = ROUND_AWAY_ZERO;
	resultLong = MATHLIB::round(valDouble, rule);
	if(resultLong == 8) {
		noTestsPassed++;
		cout << "Test Passed!" << endl << endl;
	} else {
		cout << "Test Failed..." << endl << endl;
	}

	cout << "Testing round(doubleNeg, ROUND_AWAY_ZERO)" << endl;
	valDouble = -237.23;
	rule = ROUND_AWAY_ZERO;
	resultLong = MATHLIB::round(valDouble, rule);
	if(resultLong == -238) {
		noTestsPassed++;
		cout << "Test Passed!" << endl << endl;
	} else {
		cout << "Test Failed..." << endl << endl;
	}

	// ROUND_HALF_UP
	cout << "Testing round(doublePos, ROUND_HALF_UP)" << endl;
	valDouble = 7.5;
	rule = ROUND_HALF_UP;
	resultLong = MATHLIB::round(valDouble, rule);
	if(resultLong == 8) {
		noTestsPassed++;
		cout << "Test Passed!" << endl << endl;
	} else {
		cout << "Test Failed..." << endl << endl;
	}

	cout << "Testing round(doubleNeg, ROUND_HALF_UP)" << endl;
	valDouble = -23.5;
	rule = ROUND_HALF_UP;
	resultLong = MATHLIB::round(valDouble, rule);
	if(resultLong == -23) {
		noTestsPassed++;
		cout << "Test Passed!" << endl << endl;
	} else {
		cout << "Test Failed..." << endl << endl;
	}

	// ROUND_HALF_DOWN
	cout << "Testing round(doublePos, ROUND_HALF_DOWN)" << endl;
	valDouble = 7.5;
	rule = ROUND_HALF_DOWN;
	resultLong = MATHLIB::round(valDouble, rule);
	if(resultLong == 7) {
		noTestsPassed++;
		cout << "Test Passed!" << endl << endl;
	} else {
		cout << "Test Failed..." << endl << endl;
	}

	cout << "Testing round(doubleNeg, ROUND_HALF_DOWN)" << endl;
	valDouble = -23.5;
	rule = ROUND_HALF_DOWN;
	resultLong = MATHLIB::round(valDouble, rule);
	if(resultLong == -24) {
		noTestsPassed++;
		cout << "Test Passed!" << endl << endl;
	} else {
		cout << "Test Failed..." << endl << endl;
	}

	// ROUND_HALF_TO_ZERO
	cout << "Testing round(doublePos, ROUND_HALF_TO_ZERO)" << endl;
	valDouble = 18.5;
	rule = ROUND_HALF_TO_ZERO;
	resultLong = MATHLIB::round(valDouble, rule);
	if(resultLong == 18) {
		noTestsPassed++;
		cout << "Test Passed!" << endl << endl;
	} else {
		cout << "Test Failed..." << endl << endl;
	}

	cout << "Testing round(doubleNeg, ROUND_HALF_TO_ZERO)" << endl;
	valDouble = -113.5;
	rule = ROUND_HALF_TO_ZERO;
	resultLong = MATHLIB::round(valDouble, rule);
	if(resultLong == -113) {
		noTestsPassed++;
		cout << "Test Passed!" << endl << endl;
	} else {
		cout << "Test Failed..." << endl << endl;
	}

	// ROUND_HALF_AWAY_ZERO
	cout << "Testing round(doublePos, ROUND_HALF_AWAY_ZERO)" << endl;
	valDouble = 39.5;
	rule = ROUND_HALF_AWAY_ZERO;
	resultLong = MATHLIB::round(valDouble, rule);
	if(resultLong == 40) {
		noTestsPassed++;
		cout << "Test Passed!" << endl << endl;
	} else {
		cout << "Test Failed..." << endl << endl;
	}

	cout << "Testing round(doubleNeg, ROUND_HALF_AWAY_ZERO)" << endl;
	valDouble = -39.5;
	rule = ROUND_HALF_AWAY_ZERO;
	resultLong = MATHLIB::round(valDouble, rule);
	if(resultLong == -40) {
		noTestsPassed++;
		cout << "Test Passed!" << endl << endl;
	} else {
		cout << "Test Failed..." << endl << endl;
	}

	// ROUND_HALF_TO_EVEN
	cout << "Testing round(doublePos, ROUND_HALF_TO_EVEN)" << endl;
	valDouble = 7.5;
	rule = ROUND_HALF_TO_EVEN;
	resultLong = MATHLIB::round(valDouble, rule);
	if(resultLong == 8) {
		noTestsPassed++;
		cout << "Test Passed!" << endl << endl;
	} else {
		cout << "Test Failed..." << endl << endl;
	}

	cout << "Testing round(doubleNeg, ROUND_HALF_TO_EVEN)" << endl;
	valDouble = -32.5;
	rule = ROUND_HALF_TO_EVEN;
	resultLong = MATHLIB::round(valDouble, rule);
	if(resultLong == -32) {
		noTestsPassed++;
		cout << "Test Passed!" << endl << endl;
	} else {
		cout << "Test Failed..." << endl << endl;
	}

	// ROUND_HALF_TO_ODD
	cout << "Testing round(doublePos, ROUND_HALF_TO_ODD)" << endl;
	valDouble = 7.23;
	rule = ROUND_HALF_TO_ODD;
	resultLong = MATHLIB::round(valDouble, rule);
	if(resultLong == 7) {
		noTestsPassed++;
		cout << "Test Passed!" << endl << endl;
	} else {
		cout << "Test Failed..." << endl << endl;
	}

	cout << "Testing round(doubleNeg, ROUND_HALF_TO_ODD)" << endl;
	valDouble = -123.5;
	rule = ROUND_HALF_TO_ODD;
	resultLong = MATHLIB::round(valDouble, rule);
	if(resultLong == -123) {
		noTestsPassed++;
		cout << "Test Passed!" << endl << endl;
	} else {
		cout << "Test Failed..." << endl << endl;
	}


	// pow(double, long)
	cout << "Testing pow(doublePos, longPos)" << endl;
	valDouble = 2;
	valLong = 3;
	resultDouble = MATHLIB::pow(valDouble, valLong);
	if(resultDouble == 8) {
		noTestsPassed++;
		cout << "Test Passed!" << endl << endl;
	} else {
		cout << "Test Failed..." << endl << endl;
	}

	cout << "Testing pow(doublePos, longNeg)" << endl;
	valDouble = 2;
	valLong = -3;
	resultDouble = MATHLIB::pow(valDouble, valLong);
	if(resultDouble == 0.125) {
		noTestsPassed++;
		cout << "Test Passed!" << endl << endl;
	} else {
		cout << "Test Failed..." << endl << endl;
	}


	// toString(int, int unsigned, bool)
	int unsigned radix = 0;
	bool isLowerCase = true;
	string result = "";
	string actual = "";

	cout << "Testing toString(numPos, radix, true)" << endl;
	valInt = 2;
	radix = 2;
	isLowerCase = true;
	result = MATHLIB::toString(valInt, radix, isLowerCase);
	actual = "10";
	if((actual.compare(result)) == 0) {
		noTestsPassed++;
		cout << "Test Passed!" << endl << endl;
	} else {
		cout << "Test Failed..." << endl << endl;
	}

	cout << "Testing toString(numNeg, radix, true)" << endl;
	valInt = -2;
	radix = 2;
	isLowerCase = true;
	result = MATHLIB::toString(valInt, radix, isLowerCase);
	actual = "-10";
	if((actual.compare(result)) == 0) {
		noTestsPassed++;
		cout << "Test Passed!" << endl << endl;
	} else {
		cout << "Test Failed..." << endl << endl;
	}

	cout << "Testing toString(numPos, radix, false)" << endl;
	valInt = 12348;
	radix = 29;
	isLowerCase = false;
	result = MATHLIB::toString(valInt, radix, isLowerCase);
	actual = "EJN";
	if((actual.compare(result)) == 0) {
		noTestsPassed++;
		cout << "Test Passed!" << endl << endl;
	} else {
		cout << "Test Failed..." << endl << endl;
	}

	// gcd(int, int)
	cout << "Testing gcd(intPos, intPos)" << endl;
	valInt = 12;
	valInt1 = 15;
	resultInt = MATHLIB::gcd(valInt, valInt1);
	if(resultInt == 3) {
		noTestsPassed++;
		cout << "Test Passed!" << endl << endl;
	} else {
		cout << "Test Failed..." << endl << endl;
	}

	cout << "Testing gcd(intNeg, intNeg)" << endl;
	valInt = -30;
	valInt1 = -15;
	resultInt = MATHLIB::gcd(valInt, valInt1);
	if(resultInt == 15) {
		noTestsPassed++;
		cout << "Test Passed!" << endl << endl;
	} else {
		cout << "Test Failed..." << endl << endl;
	}

	cout << "Testing gcd(intPos, intNeg)" << endl;
	valInt = 30;
	valInt1 = -24;
	resultInt = MATHLIB::gcd(valInt, valInt1);
	if(resultInt == 6) {
		noTestsPassed++;
		cout << "Test Passed!" << endl << endl;
	} else {
		cout << "Test Failed..." << endl << endl;
	}


	// print test results	
	cout << "It passed " << noTestsPassed << "/" << noTests << " tests!" << endl;
}
