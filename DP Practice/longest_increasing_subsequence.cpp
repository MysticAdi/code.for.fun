//Given an array, find the longest non-decreasing subsequence
//Use Dynamic Programming

#include<iostream>
#include<algorithm>
using namespace std;

int longest_subs(int arr[] , int n)
{
	int lis[n]={1};
	for(int i=1;i<n;i++)
	{
		for(int j=0;j<i;j++)
		{
			if((arr[i]>arr[j]) && (lis[i]<lis[j]+1) )  //Check if prev lis is just one less than the current one, for increment
				lis[i] = lis[j]+1;
		}
	}
	return *max_element(lis,lis+n);

}
int main()
{
	int arr[]= {10, 22, 9, 33, 21, 50, 41, 60};
	int n = sizeof(arr)/sizeof(arr[0]);
	int x = longest_subs(arr,n);
	cout<<x<<endl;
}