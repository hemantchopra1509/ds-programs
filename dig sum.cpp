#include<bits/stdc++.h>
using namespace std;

int digSum(int n)
{
    int sum=0,m;
	while(n>0 || sum>9)
	{
		m=n%10;
		sum=sum+m;
		n=n/10;	
	}
	return sum;
}
    
 
int main()
{
     int n, sum=0, number,i;
    cout << "Enter the number of element of an array:";
    cin>>n;
     int a[n];
    cout<<"Enter the elements of an array:";
    for(i=0;i<n;i++)
        {
		cin>>a[i];
        sum=sum+a[i];
	    }
		if (sum>9)
		cout << digSum(sum);
    
        return 0;
}
