#include <iostream>

using namespace std;

int main()
{
    int row,col;
    cin>>row>>col;
    char matrix[row][col];
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
            cin>>matrix[i][j];
    }
    int dir=0,left=0,counter=0,right=col-1,top=0, bottom=row-1;
    while(left<=right && top<=bottom)
    {
            if(dir==0)
            {
                for(int i=left;i<=right;i++)
                {
                    if(matrix[top][i]=='.')
                        counter++;
                    else
                    {
                        right=i-1;
                        break;
                    }
                }
                top++;
            }
            else if(dir==1)
            {
                for(int i=top;i<=bottom;i++)
                {
                    if(matrix[i][right]=='.')
                        counter++;
                    else
                    {
                        bottom=i-1;
                        break;
                    }
                }
                right--;
            }
            else if(dir==2)
            {
                for(int i=right;i>=left;i--)
                {
                    if(matrix[bottom][i]=='.')
                        counter++;
                    else
                    {
                        left=i+1;
                        break;
                    }
                }
                bottom--;
            }
            else
            {
                for(int i=bottom;i>=top;i--)
                {
                    if(matrix[i][left]=='.')
                        counter++;
                    else
                    {
                        top=i+1;
                        break;
                    }
                }
                left++;
            }
            dir = (dir+1)%4;
    }
    cout<<counter;
    return 0;
}
