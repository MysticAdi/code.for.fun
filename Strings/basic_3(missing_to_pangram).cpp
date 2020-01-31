//Missing characters to make a string Pangram

#include<iostream>
#include<array>
#include<utility>
#include<algorithm>
#include<string>

using namespace std;

int main()
{
	string s;getline(cin,s);
	array<int,26> a={0};
	int index;
	for(int i=0;i<s.length();i++)
	{
		if(s[i]>='a' && s[i]<='z')
		{
			index = s[i] - 'a';
		}

		a[index] = 1;
	}

	for(int i=0;i<a.size();i++)
	{
		if(a[i] == 0)
		{
			cout<<(char)(i+'a');
		}
	}
	return 0;
}