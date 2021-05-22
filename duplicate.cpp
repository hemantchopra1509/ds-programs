#include<iostream>
#include<bits/stdc++.h>
using namespace std;
 
void printRepeating(int arr[], int size)
{
    int i, j;
    cout<<"duplicates= ";
    for(i=0;i<size;i++)
        for(j=i+1;j<size;j++)
        if(arr[i]==arr[j])
            cout<<arr[i]<<" ";
}
int main()
{
    int arr[]={0,7,2,5,4,1,7,3,6};
    int arr_size = sizeof(arr)/sizeof(arr[0]);
    printRepeating(arr, arr_size);
}
