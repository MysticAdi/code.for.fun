//To check if number contains zeroes in the beginning

#include<iostream>
#include<string>
#include<algorithm>
#include <utility>

using namespace std;

int main()
{
	string s;cin>>s;
	if(s[0] == '0')
		cout<<"Not a duck number"<<endl;
	else
		cout<<"Duck Number"<<endl;

	return 0;
}