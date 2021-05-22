#include <iostream>
using namespace std;
bool isPalindrome(string S)
{
    int low=0;
    int high=S.length()- 1;
 
    while (low<high)
    {
        if (S[low]!= S[high]) {
            return false;
        }
        low++;
        high--;
    }
    return true;
}
 
int main()
{
    string S="abba";
 
    if (isPalindrome(S)) {
        cout<<"Palindrome";
    }
    else {
        cout<<"Not Palindrome";
    }
 
    return 0;
}



