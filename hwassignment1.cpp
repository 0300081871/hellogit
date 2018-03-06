#include <iostream>
#include <vector>
#include "hwassignment1.h"
using namespace std;
int main()
{
	int myID=0;
	int i = 0;
	std::string myName = " ";
	cout<<"Enter your id number"<<endl;
	cin<<myID;
	cout<<"Please enter your name"<<endl;
	cin<<myName;
	
	Subject subj1;
	Subject subj2;
	
	subj1.setID(myID);
	subj1.setName(myName);
	subj2.setID (myID);
	subj2.setName(myName);
	
	vector <Subject> myVector;
	myVector.push_back(subj1);
	myVector.push_back(subj2);
	
	vector <Subject> thisVector;
	thisVector.push_back(subj1);
	thisVector.push_back(subj2);
	
	
	for (i=0; i< myVector.size(); i++)
	{
		cout<<myVector[i]<<endl;
		cout<<myVector[i].getID();
	}
	
	for (i=0; i<thisVector.size(); i++)
	{
		cout<<thisVector[i]<<endl;
		cout<<thisVector[i].getName();
	}
	return 0;
}
	
