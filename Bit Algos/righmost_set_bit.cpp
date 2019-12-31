// Find the position of the rightmost set bit

#include<iostream>
#include<algorithm>
using namespace std;
#define INT_MAX 32
int pos_right(int n)
{
	int count =1;
	int a = 1;				//Initialise a variable to bit 1
	for(int i=0;i<INT_MAX;i++) //Go till max flow for INT in C++ ie. 32
	{
		if(a&n)				   //Keep performing & operation while left shifting the value of 1
			return count;
		else
			{	a= a<<1;
				count++;} 
	}
	return -1;
}
int main()
{
	int n=16;
	int x = pos_right(n);
	cout<<x<<endl;
}