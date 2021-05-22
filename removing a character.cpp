#include <bits/stdc++.h>
using namespace std;
int main()
{
	char str[20],ch;
	int i,n,j;
	cout<<"enter a string: ";
	cin>>str;
	cout<<"enter a charcater: ";
	cin>>ch;
	n=strlen(str);
	for(i=0,j=0;i<n;i++)
	{
		if(str[i]!=ch)
		{	
			str[j]=str[i];
			j++;
		}
	}
	str[j]='\0';
	cout<<"string: "<<str;
	return 0;
}
