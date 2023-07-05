#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <cstring>
#include <list>
#include <algorithm>
#include <iterator>
#include <map>
#include <string>
#include <utility>

Using namespace std;

/**********************
Default Constructor
**********************/
dataProcessing::dataProcessing()
{
}

/*************************
Constructor
*************************/
dataProcessing::dataProcessing(list<int> inputList, int compVal, string inputString, int shiftVal)
{
	setInputList(list<int> inputList);
	setInputString(string inputString);
	setShiftVal(shiftVal);
	setCompVal(compVal);
}

/**************************
Function: aboveBelow
Use: compares an input value to a list of numbers and records how many numbers in the list are above or below the input comparison value
Args: list<int>, int
***************************/
Map<string, int> dataProcessing::aboveBelow(list<int> inputList, int compVal)
{
	int above = 0;
	int below = 0;
	for(i=0, i < inputList.size(), i++){
		if (inputList[i] < compVal){
			below++;
		}
		else if (inputList[I] > compVal){
			above++;
		}
	}
	mapResponse[“above”] = above;
	mapResponse[“below”] = below;
	return mapResponse;
}

/*************************
Funtion: stringRotation
Use: rotates the characters in the passed in sting to the right by a given value
Args: string, int
*************************/
String dataProcessing::stringRotation(string inputString, int shiftVal)
{
	shiftString = leftrotate(inputString, inputString.length()-shiftVal);
	return shiftString;	
}

/***********************************
Setter Methods for Class Contruction
************************************/
Void dataProcessing::setInputList(list<int> newList)
{
	inputList = newList;
}

Void dataProcessing::setInputString(string newString)
{
	inputString = newString;
}

Void dataProcessing::setShiftVal(int newVal)
{
	shiftVal = newVal;
}

Void dataProcessing::setCompVal(int newVal)
{
	compVal = newVal;
}
