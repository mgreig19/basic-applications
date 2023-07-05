/********************************************************************
 Author:    Mason Greig

 Purpose:   Interview Submission

 *********************************************************************/
#ifndef Process_H
#define Process_H
#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <cstring>
#include <list>
#include <algorithm>
#include <iterator>
#include <map>
#include <string>

Class dataProcessing {

	private:
		
		Int compVal;
		List<int> inputList;
		Map<string, int> mapResponse;
		String inputString;
		Int shiftVal;	
		String shiftString;
		
	public:
		dataProcessing();
		dataProcessing(list<int> inputList, int compVal, string inputString, int shiftVal);
		map<string, int> aboveBelow(list<int> numbers, int compVal);
		string stringRotation(string inString, int shiftVal);
		void setInputList(list<int> newList);
		void setInputString(string newString);
		void setShiftVal(int newVal);
		void setCompVal(int newVal);


		
};
#endif

