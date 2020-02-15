#include<algorithm>
#include<iostream>
#include<utility>

using namespace std;
bool comp(int a, int b) 
{ 
    return (a < b); 
} 

int main()
{
	int a[5] = {1,2,3,4,7};
	int *l1 = std::max_element(a+1,a+5,comp);
	int x = (int)*l1;	
	cout<<x<<endl;
	return 0;
}