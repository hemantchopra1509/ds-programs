#include <bits/stdc++.h>
using namespace std;
int maximum_sum(int arr[], int n)
{
    int max_sum=INT_MIN;
    int sum=0;
    for (int i=0; i<n; i++)
    {
		sum=sum+arr[i];
	        if (sum>max_sum) 
			{
                max_sum=sum;
            }

    }
 
    return max_sum;
}
 
int main()
{
    int arr[]={-1,-2,-3,-4 };
    int n=sizeof(arr)/sizeof(arr[0]);
    cout<<maximum_sum(arr, n); 
    return 0;
}
