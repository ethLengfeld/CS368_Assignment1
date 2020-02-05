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
// Online sources:   None
//
////////////////////////////////////////////////////////////////////////////////

#include "MathLib.h"

int main() {
	int noTests = 15;
	int noTestsPassed = 0;
	cout << "Here are the tests" << endl;
	
	// Beginning Tests!

	cout << "Testing absVal(int)" << endl;
	int val = -4;
	int absVal = MATHLIB::absVal(val);
	if(absVal == 4) {
		noTestsPassed++;
		cout << "Test Passed!" << endl;
	} else {
		cout << "Test Failed..." << endl;
	}

	cout << "Testing absVal(double)" << endl;
	double val = -13.1234;
	double absVal = MATHLIB::absVal(val);
	if(absVal == 13.1234) {
		noTestsPassed++;
		cout << "Test Passed!" << endl;
	} else {
		cout << "Test Failed..." << endl;
	}

	cout << "Testing absVal(long)" << endl;
	long val = -100.12341221349871;
	long absVal = MATHLIB::absVal(val);
	if(absVal ==100.12341221349871) {
		noTestsPassed++;
		cout << "Test Passed!" << endl;
	} else {
		cout << "Test Failed..." << endl;
	}

	cout << "Testing ceiling(double pos)" << endl;
	double val = 7.23;
	long ceilingVal = MATHLIB::ceiling(val);
		if(ceilingVal == 8) {
		noTestsPassed++;
		cout << "Test Passed!" << endl;
	} else {
		cout << "Test Failed..." << endl;
	}

	cout << "Testing ceiling(double neg)" << endl;
	double val = -7.23;
	long ceilingValNeg = MATHLIB::ceiling(val);
		if(ceilingValNeg == -6) {
		noTestsPassed++;
		cout << "Test Passed!" << endl;
	} else {
		cout << "Test Failed..." << endl;
	}

	cout << "Testing floor(double)" << endl;
	double val = 7.23;
	long floorVal = MATHLIB::floor(val);
	if(flootVal == 7) {
		noTestsPassed++;
		cout << "Test Passed!" << endl;
	} else {
		cout << "Test Failed..." << endl;
	}


	RoundingRule rule = ROUND_DOWN;


	cout << "Testing round(double, ROUND_DOWN)" << endl;
	double val = 7.23;
	rule = ROUND_DOWN;
	long roundedVal = MATHLIB::round(val, rule);
	// TODO update with proper value
	if(roundedVal == 8) {
		noTestsPassed++;
		cout << "Test Passed!" << endl;
	} else {
		cout << "Test Failed..." << endl;
	}

	cout << "Testing round(double, ROUND_UP)" << endl;
	double val = 7.23;
	rule = ROUND_UP;
	long roundedVal = MATHLIB::round(val, rule);
	// TODO update with proper value
	if(roundedVal == 8) {
		noTestsPassed++;
		cout << "Test Passed!" << endl;
	} else {
		cout << "Test Failed..." << endl;
	}

	cout << "Testing round(double, ROUND_TO_ZERO)" << endl;
	double val = 7.23;
	rule = ROUND_TO_ZERO;
	long roundedVal = MATHLIB::round(val, rule);
	// TODO update with proper value
	if(roundedVal == 8) {
		noTestsPassed++;
		cout << "Test Passed!" << endl;
	} else {
		cout << "Test Failed..." << endl;
	}

	cout << "Testing round(double, ROUND_AWAY_ZERO)" << endl;
	double val = 7.23;
	rule = ROUND_AWAY_ZERO;
	long roundedVal = MATHLIB::round(val, rule);
	// TODO update with proper value
	if(roundedVal == 8) {
		noTestsPassed++;
		cout << "Test Passed!" << endl;
	} else {
		cout << "Test Failed..." << endl;
	}

	cout << "Testing round(double, ROUND_HALF_UP)" << endl;
	double val = 7.23;
	rule = ROUND_HALF_UP;
	long roundedVal = MATHLIB::round(val, rule);
	// TODO update with proper value
	if(roundedVal == 8) {
		noTestsPassed++;
		cout << "Test Passed!" << endl;
	} else {
		cout << "Test Failed..." << endl;
	}

	cout << "Testing round(double, ROUND_HALF_DOWN)" << endl;
	double val = 7.23;
	rule = ROUND_HALF_DOWN;
	long roundedVal = MATHLIB::round(val, rule);
	// TODO update with proper value
	if(roundedVal == 8) {
		noTestsPassed++;
		cout << "Test Passed!" << endl;
	} else {
		cout << "Test Failed..." << endl;
	}

	cout << "Testing round(double, ROUND_HALF_TO_ZERO)" << endl;
	double val = 7.23;
	rule = ROUND_HALF_TO_ZERO;
	long roundedVal = MATHLIB::round(val, rule);
	// TODO update with proper value
	if(roundedVal == 8) {
		noTestsPassed++;
		cout << "Test Passed!" << endl;
	} else {
		cout << "Test Failed..." << endl;
	}

	cout << "Testing round(double, ROUND_HALF_AWAY_ZERO)" << endl;
	double val = 7.23;
	rule = ROUND_HALF_AWAY_ZERO;
	long roundedVal = MATHLIB::round(val, rule);
	// TODO update with proper value
	if(roundedVal == 8) {
		noTestsPassed++;
		cout << "Test Passed!" << endl;
	} else {
		cout << "Test Failed..." << endl;
	}

	cout << "Testing round(double, ROUND_HALF_TO_EVEN)" << endl;
	double val = 7.23;
	rule = ROUND_HALF_TO_EVEN;
	long roundedVal = MATHLIB::round(val, rule);
	// TODO update with proper value
	if(roundedVal == 8) {
		noTestsPassed++;
		cout << "Test Passed!" << endl;
	} else {
		cout << "Test Failed..." << endl;
	}

	cout << "Testing round(double, ROUND_HALF_TO_ODD)" << endl;
	double val = 7.23;
	rule = ROUND_HALF_TO_ODD;
	long roundedVal = MATHLIB::round(val, rule);
	// TODO update with proper value
	if(roundedVal == 8) {
		noTestsPassed++;
		cout << "Test Passed!" << endl;
	} else {
		cout << "Test Failed..." << endl;
	}

	cout << "Testing pow(double, long)" << endl;
	double val = 2;
	long exponent = 2;
	double powVal = MATHLIB::pow(val, exponent);
	if(powVal == 8) {
		noTestsPassed++;
		cout << "Test Passed!" << endl;
	} else {
		cout << "Test Failed..." << endl;
	}

	// TODO add testing for toString()

	cout << "Testing gcd(intPos, intPos)" << endl;
	int val1 = 12;
	int val2 = 15;
	int gcd = MATHLIB::gcd(val1, val2);
	if(gcd == 3) {
		noTestsPassed++;
		cout << "Test Passed!" << endl;
	} else {
		cout << "Test Failed..." << endl;
	}

	cout << "Testing gcd(intNeg, intNeg)" << endl;
	int val1 = -30;
	int val2 = -15;
	int gcd = MATHLIB::gcd(val1, val2);
	if(gcd == 5) {
		noTestsPassed++;
		cout << "Test Passed!" << endl;
	} else {
		cout << "Test Failed..." << endl;
	}

	cout << "Testing gcd(intPos, intNeg)" << endl;
	int val1 = 30;
	int val2 = -24;
	int gcd = MATHLIB::gcd(val1, val2);
	if(gcd == 6) {
		noTestsPassed++;
		cout << "Test Passed!" << endl;
	} else {
		cout << "Test Failed..." << endl;
	}

	// print test results	
	cout << "It passed " << noTestsPassed << "/" << noTests << " tests!" << endl;
}
