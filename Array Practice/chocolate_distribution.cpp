//Array of n elements denoting packets of chocolates
//Each packet can have variable number of chocolates
//Given m children, find minimum MAX-MIN value.

#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int chocolateDistribution(int arr[],int l,int m)
{
	if (m==0 || l==0)
		return 0;


	sort(arr,arr+l);

	if(m>l)
		return -1;

	int i;
	int min_val = arr[l-1]-arr[0];
	for(i=0;i<=l-m;i++)
	{
		int j=i+m-1;
		int curr_diff = arr[j]-arr[i];
		if(curr_diff<min_val)
			min_val=curr_diff;
	}
	return min_val;
}
int main()
{
	int arr[]={3, 4, 1, 9, 56, 7, 9, 12};
    int l = sizeof(arr)/sizeof(arr[0]);
    int m = 5;
   	int x = chocolateDistribution(arr,l,m);
    cout<<x<<endl;
    return 0;
} 

//O(nlogn) - because we sort before applying the search