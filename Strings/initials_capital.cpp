#include <string>
#include<iostream>
#include<utility>
#include<algorithm>
#include<sstream>

using namespace std;

int main()
{
	string str; getline(cin,str);
	stringstream s(str);
	string word;

	while(s>>word)
		cout<<(char)toupper(word[0]);

	return 0;
}