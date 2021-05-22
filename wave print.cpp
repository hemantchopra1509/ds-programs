#include<bits/stdc++.h>
using namespace std;
int main() {
    int t,i,j;
    cin >> t;
    while (t--) {
        int row,col;
        cin >> row>>col;
        int arr[row][col];
        for (int i = 0; i < row; i++) 
        {
            for(j=0;j<col;j++)
            {
                cin >> arr[i][j];    
            }
            
        }
        for(int i=0;i<col;i++)
		{
			if(i%2==0)
			{
				for(j=0;j<row;j++)
					{	
						cout<<arr[j][i]<<" ";
					}
			}
			else 
			{
				for(int j=row-1;j>=0;j--)
				{
					cout<<arr[j][i]<<" ";
				}
		    }
	    }
        
    }
    return 0;
}
