#include<iostream>
using namespace std;
int main()
{
	int i, n, largest;
	cout<<"enter the size of array: ";
	cin>>n;
	int arr[n];
	cout<<"enter the array elements: ";
	for(i=0;i<n;i++)
	cin>>arr[i];
	largest=arr[0];
	for(i=1;i<n;i++)
	{
		if (largest<arr[i])
		largest=arr[i];
	
	}
	cout<<"largest elements: "<<largest;
	return 0;
	 
}
