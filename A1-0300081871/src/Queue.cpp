#include <iostream>
#include "Queue.h"
#include <vector>

using namespace std;

class Queue::Node
{
	public:
	char data = " ";
	Node* link = nullptr;
};

Queue::Queue()
{
	frontPtr = backPtr = nullptr;
}


void Queue::enqueue (int p)
{
	Node* new_p = new node(p)
	  if (k<1 || k>num_elements +1)
      throw out_of_range ("error");
Node* newPtr = new node(alpha);
if (k==1)
{
	newPtr -> nextPtr = frontPtr;
	frontPtr = newPtr;
}
else
{
	Node* prevPtr = frontPtr;
	for (int loc = 1; loc !=k-1; loc++)
	{
		prevPtr=prevPtr -> nextPtr;
	}
	newPtr -> nextPtr = prevPtr -> nextPtr;
	prevPtr -> nextPtr = newPtr
}
		num_elements ++;
	}

Queue::Node()
{
	data=0;
	nextPtr=nullptr;
}

Queue::Node(char d, Node* ptr)
{
	data=d;
	nextPtr=ptr;
}

void Queue::setNextPtr(Node* ptr)
{
	nextPtr=ptr;
}

Node* Node::getNextPtr()
{
	return nextPtr;
}


void Queue::remove (int k)
{
	if (k<1 || k> num_elements)
	throw out_of_range ("error");
	Queue *delptr;
	if (k==1)
	{
		delptr=frontPtr;
		frontPtr= frontPtr -> nextPtr;
	}
	else
	{
		Queue* prevPtr = frontPtr;
		for (int loc=1; loc!=k-1; loc++)
		prevPtr = prevPtr -> nextPtr;
		delptr=prevPtr -> nextPtr;
		prevPtr->nextPtr=delptr->nextPtr;
	}
	delete delptr;
	num_elements--;
}

Queue::~Queue()
{
	clear();
}

void Queue:: clear()
{
	while (num_elements>0)
	{
	remove(1);
    }
}

int Queue::size()
{
	return num_elements;
}

Node* Queue::get(char k)
{
	Node* myPtr=frontPtr;
	if (k == 1)
	{
		return frontPtr;
	}
	else
	{
		for (int loc=1; loc!=k; loc++)
		{
			myPtr=myPtr -> nextPtr;
		}
		return myPtr;
	}
}
