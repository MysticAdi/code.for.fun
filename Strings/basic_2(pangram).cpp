#include<iostream>
#include<string>
#include<utility>
#include<array>
using namespace std;

int main()
{
	string s;
	getline(cin,s);
	array<int,26> a;
	int index;
	for(int i=0;i<s.length();i++)
	{
		if(s[i]>='a' && s[i]<='z')
		{
			index = s[i] - 'a';
		}
		else if(s[i]>='A' && s[i]<='Z')
		{
			index = s[i] - 'A';
		}

		a[index] = 1;
	}

	for(int i=0;i<a.size();i++)
	{
		if(a[i]==0)
		{
			cout<<"Not pangram"<<endl; goto label;
		}
	}

	cout<<"Number is Pangram"<<endl;
	label:
		return 0;
}