//Sum of elements on left indexes = Sum of elements to right indexes

#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

int equilibrium(int a[],int l)
{
	int sum=0;
	int left_sum=0;
	for(int i=0;i<l;i++)
		sum+=a[i];
	for(int i=0;i<l;i++)
	{
		sum = sum-a[i];
		
		if(left_sum==sum)  //Make sure both arithmetic conditions are not together
			return i;	   //Idea is to find total sum first and then keep subtracting
	
		left_sum+=a[i];
	}
	return -1;
}
int main()
{
	int arr[]={-7, 1, 5, 2, -4, 3, 0 };
	int l = sizeof(arr)/sizeof(arr[0]);
	int x=equilibrium(arr,l);
	cout<<x<<endl;
}