//Usage of str.erase();

#include<iostream>
#include<string>
#include<utility>
#include<algorithm>

using namespace std;

int main()
{
	string s; getline(cin,s);
	int my_len = s.length();
	for(int i=0;i<my_len;i++)
	{
		if(ispunct(s[i]))
		{	
			 s.erase(i--,1); //s.erase() starts indexing of array from 1
			 my_len = s.length();
		}
	}

	cout<<s<<endl;
	return 0;
}