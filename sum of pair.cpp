#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int findPair(int arr[], int n, int sum)
{
    int count=0;
    sort(arr,arr+n);
     int low=0;
    int high=n-1;
    while (low<high)
    {
         if (arr[low]+arr[high]==sum)
           count++;
           
         else if (arr[low]+arr[high]<sum)
         low++;
         high--;
         
    }
    return count;
 
    cout<<"Pair not found";
}
 
int main()
{
    int arr[]={ 1,5,7,-1,5}, sum=6;
 
    int n = sizeof(arr)/sizeof(arr[0]);
 
    cout<<"Count of pairs is "<<findPair(arr,n,sum);

return 0;
}




