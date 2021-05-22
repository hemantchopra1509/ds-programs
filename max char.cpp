#include <bits/stdc++.h>
using namespace std;
int main()
{
	char str[100];
	int i,n, j;
	char max;
	int count;
	int maxcount=0;
	cout<<"enter the string: ";
	cin>>str;
	n=strlen(str);
	for(i=0;i<n;i++)
	{
		count=0;
		for(j=0;j<n;j++)
			{
				if(str[i]==str[j])
					count++;
			}
	
	if(maxcount<count)
	{
		maxcount=count;
		max=str[i];
	}
}
cout<<"max char: "<<max;
	return 0;
}
