//Given range l and r for the number n, toggle bits within the range
#include<iostream>
#include<algorithm>
using namespace std;

int toggle(int n , int l , int r)
{
	int c=0;
	int b=1;			//For a new num, set bits between l to r
	b = b<<(l-1);
	for(int i=0;i<r-l+1;i++)
	{
		c = c|b;
		b = b<<1;
	}
	int x = c^n;		//XOR with the original number to reverse the bits
	return x;
}
int main()
{

	int n = 50, l =2 , r=5;
	int x = toggle(n,l,r);
	cout<<x<<endl;
}