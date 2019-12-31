//Find rightmost different between two numbers n and m

#include<iostream>
#include<algorithm>
using namespace std;
#define INT_MAX 32
int rightmost_one(int a)
{
	int count=0;
	int b=1;
	for(int i=0;i<INT_MAX;i++)
	{
		if(a&b)
			return count;
		else
		{
			b=b<<1;
			count++;
		}
	}
	return -1;
}
int right_bit(int n, int m)
{
	int x = m^n;
	int ans = rightmost_one(x);
	return ans;
}
int main()
{
	int n = 52 ;int m =4;
	int x = right_bit(n,m);
	cout<<x+1<<endl;
}