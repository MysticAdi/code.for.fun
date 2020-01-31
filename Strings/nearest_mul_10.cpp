#include<iostream>
#include<utility>
#include<string>
#include<algorithm>

using namespace std;

int main()
{
	string s; cin>>s;
	int n = s.length();
	if(s[n-1]>='5' && s[n-1]<='9')
	{
		char x = 1 + s[n-2];
		s[n-2] = x;
		s[n-1] = '0';
		cout<<s<<endl;
	}
	else
	{
		s[n-1]='0';
		cout<<s<<endl;
	}
}