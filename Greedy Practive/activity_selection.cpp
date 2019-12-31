// Given activity start and end timings as pairs
// Select maximum number of activities that can be done
// At one time, only one activity can be done

#include<iostream>
#include<utility>
#include<algorithm>
#include<vector>
using namespace std;

bool myfun(const pair<int,int> &v1, const pair<int,int> &v2)
{
	return v2.second > v1.second; 
}

int activity(vector<pair<int,int>> v,int n)
{
	sort(v.begin(),v.end(),myfun);
	int count = 0;
	count++; //First activity is always selected;
	int j=0;
	for(int i=1;i<n;i++)
	{
		if(v[i].first > v[j].second)
			{count++; i=j;}
	}
	return count;
}

int main()
{
	vector<pair<int,int>> v{{5, 9}, {1, 2}, {3, 4}, {0, 6},{5, 7}, {8, 9}};
	int n = v.size();
	int x = activity(v,n);
	cout<<x<<endl;
}