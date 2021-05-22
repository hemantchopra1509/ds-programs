#include<bits/stdc++.h>
using namespace std;

int main()
{
int t;
cin>>t;
while(t--)
{
    string str;
    cin>>str;
    int c1=0, c2=0;
    for (int i=0; i<str.length(); i++)
{    	if(i%2==1 && str[i]=='0')
        c1++;
    	else if(i%2==0 && str[i]=='1')
         c1++;
     	else if(i%2==1 && str[i]=='1')
         c2++;
    	else if(i%2==0 && str[i]=='0')
         c2++;
}
cout<<min(c1,c2)<<endl;

}
return 0;
}
