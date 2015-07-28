/*Q1. Implement Stack ADT (Abstract Data Type) with main ADT functions like push(), pop(), isStackEmpty(),
isStackFull().Use Structure or Class for defining the ADT. Use Static Array as a Data Member it can be of any
type (Primitive or User-defined).Declare necessary parameters and return types for the functions..

To define the ADT, Structure is used.


*/
#include<iostream>
using namespace std;
#define SIZE 10


struct stack { 
  stack();            
  void push(int a); 
  int pop();         
  int isStackEmpty();
  int isStackFull();
private:
  int stackData[SIZE]; 
  int topOfStack;       
};
int stack::isStackFull()
{
	if(topOfStack==SIZE)
	{
		return 1; //Stack us full
	}
	else return 0;//Stack is empty
	
}
int stack::isStackEmpty()
{
	if(topOfStack==0)
	{
		return 0;
	}
	else return 1;
}
stack::stack()
{
  cout << "Constructing a stack\n";
  topOfStack = 0;
}	
void stack::push(int a)
{
  int isFull=isStackFull();
  if(isFull==1)
  {
  	cout<<"Stack is Full....";
  	return;
  }
 
  stackData[topOfStack] = a;
  topOfStack++;
}
int stack::pop()
{
  int isEmpty = isStackEmpty();
  
  if(isEmpty==0) {
    cout << "Stack is empty\n";
    return 0; // return null on empty stack 
  }
  topOfStack--;
  return stackData[topOfStack];
}

int main()
{
  stack stackObject1, stackObject2; 
  int i;

  stackObject1.push(8);
  stackObject2.push(1);
  stackObject1.push(2);
  stackObject2.push(6);
  stackObject1.push(3);
  stackObject2.push(4);

  for(i = 0; i <3; i++) 
     cout << "Pop stackObject1: " << stackObject1.pop() << endl;
  for(i = 0; i <3; i++) 
     cout << "Pop stackObject2: " << stackObject2.pop() << endl;

  return 0;
}



