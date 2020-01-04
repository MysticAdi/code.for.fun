//Swap odd and even bits in a number

#include<iostream>
#include<algorithm>
using namespace std;

int swap_bits(int n)
{
	int a = n & 0xAAAAAAAA;	//Get all even bits
	a = a>>1;				//Swap them by 1 right
	int b = n&0x55555555;	//Get all Odd Bits
	b=b<<1;					//Swap them by 1 left
	int res = a|b;			//Add them
	return res;
}
int main()
{
	int n = 23;
	int x = swap_bits(n);
	cout<<x<<endl;
}