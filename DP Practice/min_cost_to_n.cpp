//Given a number N. Find minimal cost distance from 0 to N with the following conditions.
// 1 . P is the cost for X+1 operations
// 2 . Q is the cost for 2*X operations

#include<iostream>
using namespace std;

int minCost(int n, int p, int q)
{
	int end_cost = 0;
	while(n>0){
	if(n&1){ end_cost+=p; n--;}
	else{
		int half = n/2;
		if(half*p > q) {end_cost+=q;} //checking if p+p+....(n/2 times) is better than a single q cost
		else { end_cost+=p*half;}
		n/=2;
	}  }
	return end_cost;
}
int main()
{
	std::ios_base::sync_with_stdio(false);		//To make cin input faster
	cin.tie(NULL);
	int n = 9 , p = 5, q=1;
	int x = minCost(n,p,q);
	cout<<x<<endl;
}
