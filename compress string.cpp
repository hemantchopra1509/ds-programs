#include <bits/stdc++.h>
using namespace std;
int main()
{
	char str[100];
	cout<<"enter the string: ";
	cin>>str;
	char crnt=str[0]; int count;
	for(int i=1;str[i]!='\0';i++)
	{
		if(str[i]==crnt)
			count++;
		else
		{	
			cout<<crnt<<""<<count;
			crnt=str[i];
		count=1;
		}
	}cout<<crnt<<""<<count;
	return 0;	
}
