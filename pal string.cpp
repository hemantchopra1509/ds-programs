#include <bits/stdc++.h>
using namespace std;
	
	bool pal(string str, int first, int last)
{
		if(first>=last)
			return true;
		if(str[first]!=str[last])
			return false;
		return pal(str, first+1,last-1);		
			
}

int main()
{
	string str="sanjita";
		int n=str.length();
	if(pal(str,0,n-1))	
	{
		cout<<"yes";
	}
	else
	{
		cout<<"no";
		
	}

}
