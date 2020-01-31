//Check if two strings are anagrams of each other

#include<string>
#include<iostream>
#include<utility>
#include<algorithm>

using namespace std;

int main()
{
	string s1; cin>>s1;
	string s2; cin>>s2;

	int a[26] = {0};

	for(int i=0;i<s1.length();i++)
	{
		int index = s1[i] - 'a';
		a[index]++;

	}

	for(int i=0;i<s2.length();i++)
	{
		int index = s2[i]-'a';
		a[index]--;
	}

	for(int i=0;i<26;i++)
	{
		if(a[i]!=0)
		{
			cout<<"Not Anagram"<<endl;
			goto label;
		}
	}
	cout<<"Anagram"<<endl;
	label:
		return 0;

}