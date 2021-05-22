#include<bits/stdc++.h>
using namespace std;
 string longestPalin (string S)
    {   string res=S.substr(0,1);
    int maxi=1;
        for(int i=0;i<S.length();i++)
        {     
                int l=i, h=i+1;
            
            while(l>=0 && h<S.length() && S[l]==S[h])
            {
                l--;
                h++;
            }
            if (maxi<h-l-1)
            {
                maxi=h-l-1;
                res=S.substr(l+1,maxi);
            }    
        }
        for(int i=0;i<S.length();i++)
        {
            int l=i-1, h=i+1;
            
            while(l>=0 && h<S.length() && S[l]==S[h])
            {
                l--;
                h++;
            }
            if (maxi<h-l-1)
            {
                maxi=h-l-1;
                res=S.substr(l+1,maxi);
            }
        }
            return res;
    }
    
    int main()
    {
    	int t;
    	cin>>t;
    	while (t--)
    	{
    		string S;
    		cin>>S;
    		
           	cout<<" "<<longestPalin (S);
    		cout<<endl;
		}
		return 0;		
	}
