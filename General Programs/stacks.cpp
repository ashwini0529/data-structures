#include<stdio.h>
#include<stack>
#include<iostream>
using namespace std;
int main()
{
	std::stack<int> mystack;
	for (int i=0; i<10; ++i)
	{
		mystack.push(i);
	}
		std::cout<<"Popping out elements.."<<endl;
		while(!mystack.empty())
		{
			std::cout<<mystack.top()<<"....popped"<<endl;
			mystack.pop();
			
		}
		std::cout<<"\n";
		return 0;
	
}
