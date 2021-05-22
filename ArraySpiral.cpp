/*For a given two dimensional integer array/list of size (N*M) , print it in a spiral form .
That is you need to print in the order followed for every iteration.
a. First row (left to right)
b. Last column (top to bottom)
c. Last row (right to left)
d. First column(bottom to top)
1 2 3 4
14 15 16 5
13 20 17 6
12 19 18 7
11 10 9 8
Output
1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17
*/

#include<bits/stdc++.h>
using namespace std;
int main()
{
		int row,col;
		cout<<"Enter Row and Column of Matrix: ";
		cin>>row>>col;
		int i, m, n, k=0, l=0; 
		int arr[row][col];
		cout<<"Enter elements of Array: ";
         
	    while (k<m && l<n) 
    { 
	   for (i=l; i<n; i++) 
        { 
         	cout<<arr[k][i]; 
        } 
        k++; 
  
        for (i=k; i<m; i++) 
        { 
            cout<<arr[i][n-1]; 
        } 
        n--; 
  
        if (k<m) 
        { 
            for (i=n-1; i>=l; i++) 
            { 
                cout<<arr[m-1][i]; 
            } 
            m--; 
        } 
  
        else if (l<n) 
        { 
            for (i=m-1; i>=k; i--) 
            { 
  	            cout<<arr[i][l]; 
            } 
            l++;     
        }         
    } 
} 
  
