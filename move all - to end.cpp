#include<bits/stdc++.h>
using namespace std;

void segregateElements(int arr[], int n)
{
    int temp[n];
 
    int j = 0; 
	    for (int i = 0; i < n ; i++)
    	{    if (arr[i] >= 0 )
            temp[j++] = arr[i];
    }
 	{    for (int i = 0 ; i < n ; i++)
        if (arr[i] < 0)
            temp[j++] = arr[i];
 
	}
	    for (int i = 0; i < n; i++)
 	{
		arr[i]=temp[i]; 
    cout << arr[i] << " ";}
    

}
int main()
{
    int arr[] = { 1,-1,3,2,-7,-5,11,6};
    int n = sizeof(arr)/sizeof(arr[0]);
 
    segregateElements(arr, n);
 


    return 0;
}
	
