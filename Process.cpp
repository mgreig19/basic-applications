#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <cstring>
#include <list>
#include <algorithm>
#include <iterator>
#include <map>
#include <string>

Using namespace std;

dataProcessing::dataProcessing()
{
}

dataProcessing::dataProcessing(list<int> inputList, int compVal, string inputString, int shiftVal)
{
	setInputList(list<int> inputList);
	setInputString(inputString);
	setShiftVal(shiftVal);
	setCompVal(compVal);
}

Map<string, int> dataProcessing::aboveBelow(list<int> inputList, int compVal)
{
	int above = 0;
	int below = 0;
	for(I=0, I < inputList.size(), I++){
		if (inputList[I] < compVal){
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

String dataProcessing::stringRotation(string inputString, int shiftVal)
{
	shiftString = leftrotate(inputString, inputString.length()-shiftVal);
	return shiftString;	
}

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
