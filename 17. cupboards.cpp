#include<bits/stdc++.h>
using namespace std;

int main()
{
    int i, j, n, lclosed=0, lopen=0, rclosed=0, ropen=0;
    long d[10010][2];
    cin>>n;
    for(i=1; i<=n; i++)
    {
        for(int j=1; j<=2; j++)
        {
            cin>>d[i][j];
            if(j==1 && d[i][j]==0)
                lclosed++;
            else if(j==1 && d[i][j]==1)
                lopen++;
            else if(j==2 && d[i][j]==0)
                rclosed++;
            else if(j==2 && d[i][j]==1)
                ropen++;
        }
    }
    cout<<(min(lclosed, lopen) + min(rclosed, ropen));
    return 0;
}
