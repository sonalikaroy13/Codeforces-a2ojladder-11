#include <bits/stdc++.h>
using namespace std;

int main()
{   ios_base :: sync_with_stdio(false);
    cin.tie(0) ;
    cout.tie(0) ;
    int i, j, A[4][4], B[5][5]= {{1, 1, 1, 1, 1}, {1, 1, 1, 1, 1}, {1, 1, 1, 1, 1}, {1, 1, 1, 1, 1}, {1, 1, 1, 1, 1}};
    for(i=1; i<4; i++)
    {
        for(j=1; j<4; j++)
        {
            std::cin>>A[i][j];
        }
    }
    for(i=1; i<4; i++)
    {
        for(j=1; j<4; j++)
        {
            if((A[i][j]%2!=0))
            {
                B[i][j]= !(B[i][j]);
                B[i][j-1]= !(B[i][j-1]);
                B[i][j+1]= !(B[i][j+1]);
                B[i-1][j]= !(B[i-1][j]);
                B[i+1][j]= !(B[i+1][j]);
            }
            else{
                continue;
            }
        }
    }
    for(i=1; i<4; i++)
    {
        for(j=1; j<4; j++)
        {
            std::cout<<B[i][j];
        }
        cout<<'\n';
    }
    return 0;
}
