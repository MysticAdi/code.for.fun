#include<iostream>
#include<algorithm>

using namespace std;
int josephus(int n,int k)
{
	if(n==1)
		return 1;
	else
		return (josephus(n-1,k)+k-1)%n+1; //n-i+2 for anticlockwise direction
}
int main()
{
	int n=5;
	int k=2;
	int x = josephus(n,k);
	cout<<x<<endl;
}