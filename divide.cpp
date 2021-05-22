#include <iostream>

using namespace std;

int main()
{
    int n, number,A[n],i;
    cout << "Enter the number of element of an array:";
    cin>>n;
    cout<<"Enter the elements of an array:";
    for(i=0;i<n;i++)
        cin>>A[i];
    cout<<"Enter the number you want to divide all the elements of an array:";
    cin>>number;
    for(i=0;i<n;i++)
        {	
        	if(A[i]/number==0)
        		A[i]=-1;
        	else 
				A[i]=A[i]/number;	
		}
    cout<<"Enter final array after dividing all elements with "<<number<<" :\n";
    for(i=0;i<n;i++)
        cout<<A[i]<<" ";
    return 0;
}
