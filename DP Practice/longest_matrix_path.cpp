//Find longest path in a nxn matrix provided that the path is in increasing order.
//The adjacent elements must have a difference of 1 to form a path.
//Return the path length

#include<iostream>
#include<cstring>
#include<algorithm>
using namespace std;
const int n =3;
int longest_path(int arr[n][n], int n)
{
	int dp[n][n];
	memset(dp, -1, sizeof dp);
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			
		}
	}
	return -1;
}

int main(){
	int arr[n][n]={	{1,2,9},
					{5,3,8},
					{4,6,7}	};
	int x = longest_path(arr,n);
	//cout<<x<<endl;
}