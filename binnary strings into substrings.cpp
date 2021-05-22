#include <iostream>

using namespace std;

int main()
{

    string s= "01010100001111111000";
    int counter=0, res=0;
    for(int i=0;i<s.length();i++)
    {
        if(s[i]=='0')
            counter++;
        else
            counter--;
        if(counter==0)
            res++;
    }
    if(counter!=0)
        cout<<"-1";
    else
        cout<<res;
    return 0;
}
