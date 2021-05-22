#include <bits/stdc++.h>
using namespace std;
float median(int arr[], int n)
{
   sort(arr, arr+n);
	if (n % 2!= 0)
		return  arr[n/2];
	else 
		return (arr[n/2] + arr[n/2 - 1])/2.0;  
}


int main() 
{ 
  int arr[] = {1, 2, 4, 5, 6, 2}; 
  int n = sizeof(arr) / sizeof(arr[0]);
  cout<< median(arr , n);
  return 0;
}
