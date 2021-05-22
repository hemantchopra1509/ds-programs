#include <bits/stdc++.h>
using namespace std;
int main()
{ int i, n;
  int s[256];
  string str="geeksforgeeks";
  n=str.length();
  cout<<"Input string is "<<s<<endl;
  printDuplicates(s,n);
	return 0;
}
void printDuplicates(int s[256],int n)
{
   for(int i=0; i<256; i++)
   {
    s[i]=0;
	}
  for(int i=0; i<n; i++)
    {
		int temp=str[i];
    	s[temp]+=1;
	}
    for(int i=0; i<256; i++)
		if(s[i]>1)
		{	
			cout<<char(i)<<"   count = "<<s[i]<<endl;
		}
}
	
