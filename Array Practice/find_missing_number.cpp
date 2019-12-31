//Given array of numbers from 1 to n, there is a missing number 
//Say [1,2,3,5] , here the missing number is 4
//Find the missing Number

//Steps: Find XOR of all numbers from 1 to n
//		 Find XOR of all array elements
//		 XOR the results of both 

#include<bits/stdc++.h>
#include<vector>
using namespace std;
void missNum(vector<int> v, int l)
{
	int x2,x1;
	x2 = v[0];
	x1 = 1;
	for(int i=2;i<=l+1;i++)
	{
		x1 = x1^i;
	}
	for(int i=1;i<l;i++)
	{
		x2 = x2^v[i];
	}
	int x3 = x2^x1;
	cout<<x3<<endl;
}
int main()
{
	vector<int> v{ 1, 2, 4, 5, 6 };
	int l = v.size();
	missNum(v,l);
	return 1;
}