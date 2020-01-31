#include <iostream>
#include<string>
#include<utility>
#include<algorithm>

using namespace std;

int main()
{
	string s = "abcdefghijklmnopqrstuvwxyz";
	string new_s = "qwertyuiopasdfghjklzxcvbnm";

	string str; cin>>str;
	for(int i=0;i<str.length();i++)
	{
		char x = str[i];
		int y = x - 'a';
		char z = new_s[y];
		str[i] = z;
	}

	cout<<str<<endl;
}