// Given array of pairs
// Find the longest chain that can be formed
// Chain is defined if {a,b} & {c,d}  
// (c,d) follows (a,b) if c>b
// O(n^2) with Dynamic Programming
// O(nlogn) with Greedy Algorithm

#include<iostream>
#include<vector>
#include<algorithm>
#include<utility>
using namespace std;

int long_chain(vector<pair<int,int>> v, int n)
{
	int lis[n] = {1};  			//Variation of Longest Increasing Sequence
	for(int i=1;i<n;i++)		
	{
		for(int j=0;j<i;j++)
		{
			if((v[j].second < v[i].first) && (lis[i]<lis[j]+1))
				lis[i]=lis[j]+1;
		}
	}
	return *max_element(lis,lis+n);
}

int main()
{
	vector<pair<int,int>> v{ {5,24} ,{39,60} ,{15,28} , {27,40} , {50,90}};
	int n = v.size();
	sort(v.begin(),v.end());
	int x=long_chain(v,n);
	cout<<x<<endl;
} 