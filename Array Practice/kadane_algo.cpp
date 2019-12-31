//Corresponds to largest contiguous subarray (Kadane's Algorithm)

#include<algorithm>
#include<iostream>
#include<vector>

using namespace std;

int kadane(int a[],int n)
{
	int curr_max = 0;
	int global_max = 0;
	for(int i=0;i<n;i++)
	{
		global_max+=a[i];
		if(global_max<0)
			global_max=0;
		else if(global_max>=curr_max)
			curr_max=global_max;
	}

	return curr_max;
}

int main()
{
	int arr[] = {-2, -3, 4, -1, -2, 1, 5, -3};
	int n = sizeof(arr)/sizeof(arr[0]);
	int x=kadane(arr,n);
	cout<<x<<endl;
}