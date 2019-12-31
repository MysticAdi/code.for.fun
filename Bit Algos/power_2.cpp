//Check if a number is power of 2
#include<iostream>
#include<algorithm>
using namespace std;


void power2(int n)
{
	if(!(n&(n-1)))
		cout<<"Yes"<<endl;
	else
		cout<<"No"<<endl;
}
int main()
{
	int n = 12;
	power2(n);
}