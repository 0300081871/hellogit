#ifndef Subject_h
#define Subject_H


class Subject {
private:
int id;
std::string name;
public: 
Subject()
{
	id=0;
	name="";
}
void setName (std::string myName)
{
	name = myname;
}
void setID (int myID)
{
	id=myID;
}
int getID () const
{
	return id;
}
std::string getName () const
{
	return name;
}
};
#endif 
