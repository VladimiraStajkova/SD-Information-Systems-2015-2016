#include <iostream>
#include <string>
using namespace std;



void swapFunction(string &s, int i, int j) {
	char tmp = s[i];
	s[i] = s[j];
	s[j] = tmp;
}


void swapEquals(string &s, int i, int j, int size) {
	for (int k = 0; k < size; k++) {
		swapFunction(s, i + k, j + k);
	}
}

void swapSubStr(string &s, int subStrPlace, int startSubStr, int lengthSubStr) {
	for (int i = startSubStr - subStrPlace; i > 0; i--)
	{
		for (int j = lengthSubStr; j > 0; j--)
		{
			swapFunction(s, i, j);
		}
	}
	cout << "String " << s << endl;
}

void swapSubStrings(string &s, int startFirst, int lengthFirst, int startSecond, int lengthSecond) {
	if (lengthFirst == lengthSecond) {
		swapEquals(s, startFirst, startSecond, lengthFirst);
		return;
	}
	string subStr;
	int startSubStr,
		lengthSubStr,
		subStrPlace;
	if (lengthFirst > lengthSecond)
	{
		swapEquals(s, startFirst, startSecond, lengthSecond);
		lengthFirst -= lengthSecond;
		lengthSubStr = lengthFirst;
		startSubStr = startFirst + lengthSecond;
		subStrPlace = startSecond + lengthSecond;
	}
	else if (lengthFirst < lengthSecond)
	{
		swapEquals(s, startFirst, startSecond, lengthFirst);
		lengthSecond -= lengthFirst; 
		lengthSubStr = lengthSecond;
		startSubStr = startSecond + lengthFirst;
		subStrPlace = startFirst + lengthFirst;
	}
	
	swapSubStr(s, subStrPlace, startSubStr, lengthSubStr);


}

int main() {
	string str = "11223344556677";
	
	swapSubStrings(str, 1, 3, 7, 4);

}