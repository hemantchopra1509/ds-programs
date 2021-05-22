#include <bits/stdc++.h>
using namespace std;
int PalinArray(int a[], int n)
{
    int i,no,r,NO ;
   
    for(i=0;i<n;i++)
    {
        no=a[i] ;
        NO=0 ;
        while(no)
        {
            r=no%10 ;
            NO=NO*10+r ;
            no=no/10 ;
        }
        if(NO!=a[i])
            break ;
    }

    if(i!=n)
        return 0 ;
    return 1;
}
int main()
{ 
  int a[] = {111, 222, 476, 555 }; 
  int n = sizeof(a) / sizeof(a[0]);
cout<<PalinArray(a,n);
return 0;
}
