#ifndef RULE_H
#define RULE_H
#include <string>
#include <iostream>
using namespace std;
class Rule
{
private:
char fromChar;
string toString;

public:

Rule();
Rule (char, string);

void setfromChar (char);
char getfromChar ();
void SettoString (string);
string getToString();
};
#endif
