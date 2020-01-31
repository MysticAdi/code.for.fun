#include <iostream>
#include <string>
#include <algorithm>
#include <utility>
#include <array>
#include <numeric>

using namespace std;

int main()
{
 string s;getline(cin,s);
 int a[26] = {0};
 int index;
 for(int i=0;i<s.length();i++)
 {
 	if(s[i]>='a' && s[i]<='z')
 	{
 		index = s[i] - 'a';
 	}

 	a[index] = 1;
 }

 int sum = accumulate(a,a+26,0);

 if(sum==26)
 {
 	cout<<"Pangram"<<endl;
 }
 else if(sum == 25)
 {
 	cout<<"Lipogram"<<endl;
 }
 else if(sum<25)
 {
 	cout<<"Maybe a Lipogram"<<endl;
 }

 return 0;

}