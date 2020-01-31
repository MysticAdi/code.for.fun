//Find the extra character in the string
//Using XOR to find the extra character

#include<iostream>
#include<algorithm>
#include<string>
#include<utility>

using namespace std;

int main()
{
	string s1;cin>>s1;
	string s2;cin>>s2;

	int a = s1.length();
	int b = s2.length();

	int res = 0;

	for(int i=0;i<a;i++)
	{
		res = res^s1[i];
	}

	for(int i=0;i<b;i++)
	{
		res = res^s2[i];
	}

	cout<<(char)(res)<<endl;
	
}