//Usage of find_first_not_of

#include<iostream>
#include<string>

using namespace std;

int main()
{
	string s;cin>>s;

	if(s.find_first_not_of(s[0]) == s.npos);
		{cout<<"All same"<<endl;goto label;}
	
	cout<<"Few Diff"<<endl;
	label:
	return 0;
}