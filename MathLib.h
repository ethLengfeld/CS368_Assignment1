////////////////////////////////////////////////////////////////////////////////
// Main File: MathLib.cpp, demo.cpp
// This File: MathLib.h
// Other Files: 	 MathLib.h / MathLib.cpp / demo.cpp / Makefile / README.md
// Semester:         CS 368 Spring 2020
//
// Author:           Ethan Lengfeld
// Email:            elengfeld@wisc.edu
// CS Login:         lengfeld
//
//
// Online sources:   https://stackoverflow.com/questions/11853851/string-in-namespace-std-does-not-name-a-type
//
//
////////////////////////////////////////////////////////////////////////////////

#ifndef MATHLIB
#define MATHLIB

/**
 * Math Library consisting of absVal(), ceiling(),
 * floor(), round(), pow(), toString(), and gcd() functions
*/
#include <string>
#include <iostream>

using namespace std;

enum RoundingRule {
	ROUND_DOWN,
	ROUND_UP,
	ROUND_TO_ZERO,
	ROUND_AWAY_ZERO,
	ROUND_HALF_UP,
	ROUND_HALF_DOWN,
	ROUND_HALF_TO_ZERO,
	ROUND_HALF_AWAY_ZERO,
	ROUND_HALF_TO_EVEN,
	ROUND_HALF_TO_ODD
};

/**
 * This function takes an int and returns the absolute value of it
 * 
 * @param int - value to take absolute value of
 * @return int - absolute value of input
*/
int absVal(int);


/**
 * This function takes a double and returns the absolute value of it
 * 
 * @param double - value to take absolute value of
 * @return double - absolute value of input
*/
double absVal(double);

/**
 * This function takes a long and returns the absolute value of it
 * 
 * @param long - value to take absolute value of
 * @return long - absolute value of input
*/
long absVal(long);

/**
 * This function returns the ceiling of the double parameter
 * 
 * @param double - value to find ceiling of
 * @return long - ceiling of input
*/
long ceiling(double);

/**
 * This function returns the floor of the double parameter
 * 
 * @param double - value to find floor of
 * @return long - floor of input
*/
long floor(double);

/**
 * This function will round the double parameter based on the RoundingRule as follows:
 * ROUND_DOWN (resp. UP) The floor (resp. ceiling) of the double.
 * ROUND_TO_ZERO (resp. AWAY_ZERO) Round to the integer closer to (resp. further from) zero.
 * ROUND_HALF_* Rounds to the nearest integer, e.g. 5.x becomes 5 when x < 0.5 and 6 when
 * x > 0.5, but requires a tie-breaker when x = 0.5.
 * The tie-breaking being:
 * DOWN (resp. UP) Floor (resp. ceiling).
 * TO_ZERO (resp. AWAY_ZERO) Closer to (further from) zero.
 * TO_EVEN (resp. TO_ODD) Round to the nearest even (resp. odd) integer.
 * 
 * @param double - value to round
 * @param RoundingRule - enum rule to specify how to round double argument
 * @return long - input value rounded 
*/
long round(double, RoundingRule);

/**
 * Raises the double value to the long exponent
 * 
 * @param double - value to be raised against long (second parm.)
 * @param long - exponential
 * @return double - calculated value of double raised to exponential(long)
*/
double pow(double, long);

/**
 * This function builds a string representation of the int (first) parameter using the unsigned int (second) 
 * parameter as the radix (i.e. numerical base). The string representation of the int will use the digits 
 * from 0 - 9 followed by a - z as needed. Negative numbers are prefixed with ’-’.
 * The bool parameter indicates if the returned number contains lower case (true) or upper case
 * (false) letters. This only applies when the radix is less than 37. It should have a default
 * value of true.
 * 
 * @param int - int to build string representation of
 * @param int unsigned - the numerical base
 * @param bool - indicate if the number contains lower case (true) or upper case(false)
 * @return string - string representation of int (first) parameter
*/
string toString(int num, int unsigned radix, bool);

/**
 * Return the greatest common divisor of the two parameters
 * 
 * @param int - first integer to check gcd
 * @param int - second integer to check gcd
 * @return int - gcd of first and second integers
*/
int gcd(int, int);

#endif
