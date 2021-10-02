#include <iostream>
#include<unordered_set>
using namespace std;

int main()
{
    int input1=10;
    int input2[]={1,2,3,1,2,2,2,3,2,2};
    int counter=0;
    unordered_set<int> s;
    for(int i=0;i<input1;i++)
    {
        if(s.find(input2[i])==s.end())
        {
            s.insert(input2[i]);
        }
        else
        {
            counter++;
            s.clear();
        }
    }
    return counter;
    return 0;
}
