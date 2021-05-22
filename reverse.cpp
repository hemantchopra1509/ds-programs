#include<bits/stdc++.h>
using namespace std;
void reverseArray(int arr[], int n){
   for (int low = 0, high = n - 1; low < high; low++, high--){
      swap(arr[low], arr[high]);
   }
   for (int i = 0; i < n; i++){
      cout << arr[i] << " ";
   }
}
int main()
{	int i,n;
	cout << "\nEnter the size of Array 1 : ";
cin >> n;
int arr1[n];
cout << "\nInput the Array 1 elements : ";
for(i = 0; i<n;i++)
{
cin >> arr1[i];
}  
   
   cout<<endl<<"Reversed=";
   reverseArray(arr1, n);
   return 0;
}
