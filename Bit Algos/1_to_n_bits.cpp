//Count total number of set bits from 1 to n.

#include<iostream>
#include<algorithm>
using namespace std;

int count_all(int n)
{
	int ans=0;
	for(int i =1;i<=n;i++)
	{
		ans+=__builtin_popcount(i);
	}
	return ans;

}
int main()
{
	int n=5;
	int x = count_all(n);
	cout<<x<<endl;
}