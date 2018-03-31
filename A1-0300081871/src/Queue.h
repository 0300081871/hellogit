#include <iostream>
#include <queue>

class Queue{
private: 
 class Node;
 Node* frontPtr=nullptr;
 Node* backPtr = nullptr;
int num_elements=0;

public:

void setNextPrt (Node* n);
Node* getNextPtr();
//Node();
//Node(char, Node*);
void setData (char d);
int  getData ();
Node* get(int k);
void enqueue(char element, int k);
void remove (int k);
int size();
void clear();
~Queue();//destructor
Queue();
Queue(int num, char k);
};

