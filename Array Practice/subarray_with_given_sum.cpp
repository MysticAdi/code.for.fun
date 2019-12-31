//Subarray with a give sum (Negative elements NOT included)
#include<iostream>
#include<vector>
using namespace std;

int subarray_sum(vector<int> v,int n,int sum)
{
	int i=0;
	int it;
	int total = v[0];
	for(it=1;it<=n;it++)
	{
		while((total>sum) && (i<it-1))    //Very important condition. Should be done with while not if.
										  //Take the case when first two numbers are already greater than reqd_sum		
		{
			total = total - v[i];
			i++;
		}
		if(total==sum)					//One condition for equality
		{
			cout<<i<<" "<<it-1<<endl;
			return 1;
		}
		if(it<n)
		{
			total = total + v[it];
		}
	}
	cout<<"Nothing"<<endl;
	return 0;
}	

int main()
{
	vector<int> v{15,2,4,8,9,5,10,23};
	int n = v.size();
	int sum = 23;
	subarray_sum(v,n,sum);
	return 0;
}