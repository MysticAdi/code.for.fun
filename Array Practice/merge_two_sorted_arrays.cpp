//Provided two sorted arrays, merge them onto another sorted array

#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

void mergeArray(vector<int> v1,int l1,vector<int> v2,int l2)
{
	int i=0,j=0,k=0;
	vector<int> v3;
	while(i<l1 && j<l2)
	{
		if(v1[i]<v2[j])
		{
			v3[k++] = v1[i++];
		}
		else
			v3[k++] = v2[j++];
	}
	cout<<v3[0]<<endl;

	while(i<l1)
		v3[k++]=v1[i++];

	while(j<l2)
		v3[k++]=v2[j++];

	for(int m=0;m<8;m++)
	{
		cout<<v3[m]<<" ";
	}
}
int main()
{
	vector<int> v1{1,3,5,7};
	int l1 = v1.size();
	vector<int> v2{2,4,6,8};
	int l2=v2.size();
	mergeArray(v1,l1,v2,l2);
	return 1;
}