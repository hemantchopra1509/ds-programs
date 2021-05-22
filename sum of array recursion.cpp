#include <bits/stdc++.h>
using namespace std;
int sum_arr(int a[],int index,int n)
{	
	
	
	if(index>n-1)
	{
		return 0;
	}
	else
	return sum_arr(a,index+1,n)+ a[index];
}
int main() 
{ int sum=0;
  int a[] = {1,2,3}; 
  int n = sizeof(a) / sizeof(a[0]);
  cout<< sum_arr(a,0,n);
}
