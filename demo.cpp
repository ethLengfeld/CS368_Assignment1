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
	int noTests = 23;
	int noTestsPassed = 0;
	cout << "Here are the tests" << endl << endl;
	
	// Beginning Tests!

	cout << "Testing absVal(int)" << endl;
	int valInt = -4;
	int absValInt = MATHLIB::absVal(valInt);
	if(absValInt == 4) {
		noTestsPassed++;
		cout << "Test Passed!" << endl << endl;
	} else {
		cout << "Test Failed..." << endl << endl;
	}


	cout << "Testing absVal(double)" << endl;
	double valDouble = -13.1234;
	double absValDouble = MATHLIB::absVal(valDouble);
	if(absValDouble == 13.1234) {
		noTestsPassed++;
		cout << "Test Passed!" << endl << endl;
	} else {
		cout << "Test Failed..." << endl << endl;
	}


	cout << "Testing absVal(long)" << endl;
	long valLong = -100;
	long absValLong = MATHLIB::absVal(valLong);
	if(absValLong == 100) {
		noTestsPassed++;
		cout << "Test Passed!" << endl << endl;
	} else {
		cout << "Test Failed..." << endl << endl;
	}


	cout << "Testing ceiling(double pos)" << endl;
	double valCeilingPos = 7.23;
	long ceilingValPos = MATHLIB::ceiling(valCeilingPos);
	if(ceilingValPos == 8) {
		noTestsPassed++;
		cout << "Test Passed!" << endl << endl;
	} else {
		cout << "Test Failed..." << endl << endl;
	}


	cout << "Testing ceiling(double neg)" << endl;
	double valDoubNeg = -7.23;
	long ceilingValNeg = MATHLIB::ceiling(valDoubNeg);
	if(ceilingValNeg == -7) {
		noTestsPassed++;
		cout << "Test Passed!" << endl << endl;
	} else {
		cout << "Test Failed..." << endl << endl;
	}


	cout << "Testing floor(double pos)" << endl;
	double valDoubPos = 7.23;
	long floorValPos = MATHLIB::floor(valDoubPos);
	if(floorValPos == 7) {
		noTestsPassed++;
		cout << "Test Passed!" << endl << endl;
	} else {
		cout << "Test Failed..." << endl << endl;
	}


	cout << "Testing floor(double neg)" << endl;
	double valFloorNeg = 7.23;
	long floorValNeg = MATHLIB::floor(valFloorNeg);
	if(floorValNeg == 7) {
		noTestsPassed++;
		cout << "Test Passed!" << endl << endl;
	} else {
		cout << "Test Failed..." << endl << endl;
	}



	RoundingRule rule = ROUND_DOWN;


	cout << "Testing round(double, ROUND_DOWN)" << endl;
	double valRD = 7.23;
	rule = ROUND_DOWN;
	long roundedValRD = MATHLIB::round(valRD, rule);
	// TODO update with proper value
	if(roundedValRD == 8) {
		noTestsPassed++;
		cout << "Test Passed!" << endl << endl;
	} else {
		cout << "Test Failed..." << endl << endl;
	}

	cout << "Testing round(double, ROUND_UP)" << endl;
	double valRU = 7.23;
	rule = ROUND_UP;
	long roundedValRU = MATHLIB::round(valRU, rule);
	// TODO update with proper value
	if(roundedValRU == 8) {
		noTestsPassed++;
		cout << "Test Passed!" << endl << endl;
	} else {
		cout << "Test Failed..." << endl << endl;
	}

	cout << "Testing round(double, ROUND_TO_ZERO)" << endl;
	double valRTZ = 7.23;
	rule = ROUND_TO_ZERO;
	long roundedValRTZ = MATHLIB::round(valRTZ, rule);
	// TODO update with proper value
	if(roundedValRTZ == 8) {
		noTestsPassed++;
		cout << "Test Passed!" << endl << endl;
	} else {
		cout << "Test Failed..." << endl << endl;
	}


	cout << "Testing round(double, ROUND_AWAY_ZERO)" << endl;
	double valRAZ = 7.23;
	rule = ROUND_AWAY_ZERO;
	long roundedValRAZ = MATHLIB::round(valRAZ, rule);
	// TODO update with proper value
	if(roundedValRAZ == 8) {
		noTestsPassed++;
		cout << "Test Passed!" << endl << endl;
	} else {
		cout << "Test Failed..." << endl << endl;
	}

	cout << "Testing round(double, ROUND_HALF_UP)" << endl;
	double valRHU = 7.23;
	rule = ROUND_HALF_UP;
	long roundedValRHU = MATHLIB::round(valRHU, rule);
	// TODO update with proper value
	if(roundedValRHU == 8) {
		noTestsPassed++;
		cout << "Test Passed!" << endl << endl;
	} else {
		cout << "Test Failed..." << endl << endl;
	}

	cout << "Testing round(double, ROUND_HALF_DOWN)" << endl;
	double valRHD = 7.23;
	rule = ROUND_HALF_DOWN;
	long roundedValRHD = MATHLIB::round(valRHD, rule);
	// TODO update with proper value
	if(roundedValRHD == 8) {
		noTestsPassed++;
		cout << "Test Passed!" << endl << endl;
	} else {
		cout << "Test Failed..." << endl << endl;
	}

	cout << "Testing round(double, ROUND_HALF_TO_ZERO)" << endl;
	double valRHTZ = 7.23;
	rule = ROUND_HALF_TO_ZERO;
	long roundedValRHTZ = MATHLIB::round(valRHTZ, rule);
	// TODO update with proper value
	if(roundedValRHTZ == 8) {
		noTestsPassed++;
		cout << "Test Passed!" << endl << endl;
	} else {
		cout << "Test Failed..." << endl << endl;
	}

	cout << "Testing round(double, ROUND_HALF_AWAY_ZERO)" << endl;
	double valRHAZ = 7.23;
	rule = ROUND_HALF_AWAY_ZERO;
	long roundedValRHAZ = MATHLIB::round(valRHAZ, rule);
	// TODO update with proper value
	if(roundedValRHAZ == 8) {
		noTestsPassed++;
		cout << "Test Passed!" << endl << endl;
	} else {
		cout << "Test Failed..." << endl << endl;
	}

	cout << "Testing round(double, ROUND_HALF_TO_EVEN)" << endl;
	double valRHTE = 7.23;
	rule = ROUND_HALF_TO_EVEN;
	long roundedValRHTE = MATHLIB::round(valRHTE, rule);
	// TODO update with proper value
	if(roundedValRHTE == 8) {
		noTestsPassed++;
		cout << "Test Passed!" << endl << endl;
	} else {
		cout << "Test Failed..." << endl << endl;
	}

	cout << "Testing round(double, ROUND_HALF_TO_ODD)" << endl;
	double valRHTO = 7.23;
	rule = ROUND_HALF_TO_ODD;
	long roundedValRHTO = MATHLIB::round(valRHTO, rule);
	// TODO update with proper value
	if(roundedValRHTO == 8) {
		noTestsPassed++;
		cout << "Test Passed!" << endl << endl;
	} else {
		cout << "Test Failed..." << endl << endl;
	}

	cout << "Testing pow(doublePos, longPos)" << endl;
	double valPow = 2;
	long exponentPow = 3;
	double powVal = MATHLIB::pow(valPow, exponentPow);
	if(powVal == 8) {
		noTestsPassed++;
		cout << "Test Passed!" << endl << endl;
	} else {
		cout << "Test Failed..." << endl << endl;
	}

	cout << "Testing pow(doublePos, longNeg)" << endl;
	double valPowWithNeg = 2;
	long exponentPowNeg = -3;
	double powValPosNeg = MATHLIB::pow(valPowWithNeg, exponentPowNeg);
	if(powValPosNeg == 0.125) {
		noTestsPassed++;
		cout << "Test Passed!" << endl << endl;
	} else {
		cout << "Test Failed..." << endl << endl;
	}

cout << "Testing toString(num, radix, false)" << endl;
	int num = 12;
	int unsigned radix = 10;
	bool hasUpperCase = false;
	string str = MATHLIB::toString(num, radix, hasUpperCase);
	// TODO fix testing
	//if(str == 12) {
	//	noTestsPassed++;
	//	cout << "Test Passed!" << endl;
	//} else {
		cout << "Test Failed..." << endl << endl;
	//}


	cout << "Testing gcd(intPos, intPos)" << endl;
	int val1PosPos = 12;
	int val2PosPos = 15;
	int gcdPosPos = MATHLIB::gcd(val1PosPos, val2PosPos);
	if(gcdPosPos == 3) {
		noTestsPassed++;
		cout << "Test Passed!" << endl << endl;
	} else {
		cout << "Test Failed..." << endl << endl;
	}

	cout << "Testing gcd(intNeg, intNeg)" << endl;
	int val1NegNeg = -30;
	int val2NegNeg = -15;
	int gcdNegNeg = MATHLIB::gcd(val1NegNeg, val2NegNeg);
	if(gcdNegNeg == 15) {
		noTestsPassed++;
		cout << "Test Passed!" << endl << endl;
	} else {
		cout << "Test Failed..." << endl << endl;
	}

	cout << "Testing gcd(intPos, intNeg)" << endl;
	int val1PosNeg = 30;
	int val2PosNeg = -24;
	int gcdPosNeg = MATHLIB::gcd(val1PosNeg, val2PosNeg);
	if(gcdPosNeg == 6) {
		noTestsPassed++;
		cout << "Test Passed!" << endl << endl;
	} else {
		cout << "Test Failed..." << endl << endl;
	}

	// print test results	
	cout << "It passed " << noTestsPassed << "/" << noTests << " tests!" << endl;
}
