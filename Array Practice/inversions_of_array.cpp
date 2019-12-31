//Find how close the array is to get sorted
//Find number of inversions required to sort

#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

//Trick is to find the occurence of lesser than the cursor number's right

int countInv(int a[],int n)
{
	int i , j,count=0;
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(a[i]>a[j])
			{
				count++;
			}
		}
	}
	return count;
}
int main()
{
	int arr[]= {1, 20, 6, 4, 5 };
	int l = sizeof(arr)/sizeof(arr[0]);
	int x =countInv(arr,l);
	cout<<x<<endl;
}