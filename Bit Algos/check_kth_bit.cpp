//Check if the kth bit is set in number n

#include<iostream>
#include<algorithm>
using namespace std;

void set_unset(int n,int k)
{	
	int a=1;
	if(n&(a<<k-1))
		cout<<"SET"<<endl;
	else
		cout<<"UNSET"<<endl;
}
int main()
{
	int n=5 , k=1;
	set_unset(n,k);
}