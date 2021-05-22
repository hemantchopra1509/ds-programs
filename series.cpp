#include<iostream>
using namespace std;

int main() 
{
int arr[100];

cout<<"enter the number= " ;
int n;
cin>> n;

int start=0;
int end=n-1;
for(int i=1;i<=n;i++)
{	
	if(i%2!=0)
	{	
		arr[start]=i;
		start++;
	}
	else 
	{	arr[end]=i;
		end--;
	}
}

for(int i=0;i<n;i++)
{
	cout<<arr[i]<<" ";
}
return 0;
}
