//Given a sorted array, arrange it alternately such that first is max, second is min, 
//third is second max, fourth is second min and so on

#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

void reArrange(const vector<int> &v, int l)
{
	int i=0;int j=l-1;
	vector<int> temp; int m=0;
	while(i<j)
	{
		temp.push_back(v[j--]);m++;
		temp.push_back(v[i++]);m++;
	}
	cout<<temp.size()<<endl;

	for(auto it=temp.begin();it!=temp.end();it++)
	{
		cout<<*it<<endl;
	}
}
int main()
{
	vector<int> v{1,2,3,4,5,6};
	int l = v.size();
	reArrange(v,l);
}