#include<iostream>
using namespace std;
int main()
{
	int array[10], isdel[10]= {0}, del,i;
	cout<<"Enter 10 numbers: ";
	for(i=0;i<10;i++)
	{
		cin>>array[i];
	}
	cout<<"Enter the number to be deleted: ";
	cin>> del;
	// Just running a loop to change the value of isdel to '1' where the element del is found
	for(i=0;i<10;i++)
	{
		if(array[i]==del)
		{
			isdel[i]=1;
			
		}
		
	}
	cout<<"\n The new array is : \n";
	//Now we have all isdel's =1 where the  delete element matches
	// display all the remaining elements from parent array
	for(i=0;i<10;i++)
	{
		if(isdel[i]!=1)
		{
			cout<<array[i]<<endl;
		}
	}
	
}
