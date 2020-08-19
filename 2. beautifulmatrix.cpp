#include <bits/stdc++.h>
using namespace std;

int main()
{
    int i, j, A[8][8], R, C;
    int count=0;
    for(i=1; i<=5; i++)
    {
        for(j=1; j<=5; j++)
        {
            cin>>A[i][j];
            if(A[i][j]==1){
                R=i;
                C=j;
            }
        }
    }
    count = (abs(R-3) + abs(C-3));
    cout<<count;
    return 0;
}