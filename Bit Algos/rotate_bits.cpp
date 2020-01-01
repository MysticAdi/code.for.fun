//Do Left and Right rotate given the number n and the shift-by value d

#include<iostream>
#include<algorithm>
using namespace std;
#define MAX 32
int bit_rright(int n, int l)
{
	int a = n<<(MAX-l);
	int b = n>>l;
	return (a|b);
}
int bit_rleft(int n , int l)
{
	int a = n<<l;
	int b = n>>(MAX-l);
	return (a|b);
}
int main()
{
	int n=16;
	int d=2;
	int x=bit_rright(n,d);
	int y = bit_rleft(n,d);
	cout<<x<<" "<<y<<endl;
}