#include <iostream>
#include <string>
#include "Rule.h"
using namespace std;

Rule :: Rule()
{
	
}
Rule :: Rule (char a, string b)
{
	fromChar=a;
	toString=b;
}

void Rule :: setfromChar(char a)
{
	fromChar=a;
}
char Rule :: getfromChar()
{
	return fromChar;
}

void Rule :: SettoString (string b)
{
	toString = b;
}

string Rule :: getToString()
{
	return toString;
}
