//Number of bits to be flipped in A to convert it to B

#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
	int a=10,b=20;
	int x = a^b;
	int y = __builtin_popcount(x); //Function of GCC to directly give the value
	cout<<y<<endl;
}