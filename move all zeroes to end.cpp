#include <bits/stdc++.h>
using namespace std;
	void pushZerosToEnd(int arr[], int n) 
	{   
	    int count=0,i;
	    for(i=0;i<n;i++)
	    {   
	        if (arr[i]!=0)
	        {
	            arr[count] = arr[i];
	            count++;
	        }
	    }
	    for(i=count;i<n;i++)
	    {   
	        arr[i]=0;
	        
	    }
	}



int main() 
{
    int t;
    cin >> t;
    while (t--) 
	{
        int n, i;
        cin >> n;
        int arr[n];
        for (i = 0; i < n; i++) 
		{
            cin >> arr[i];
        }
pushZerosToEnd(arr, n);
        for (i = 0; i < n; i++)
		{
            cout << arr[i] << " ";
        }
        cout << "\n";
    }
    return 0;
}
