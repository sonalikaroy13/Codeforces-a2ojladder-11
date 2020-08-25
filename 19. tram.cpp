#include<bits/stdc++.h>
using namespace std;

int main()
{
    int i, j, n, total=0, minm=0;
    long p[1010][2]={0};
    cin>>n;
    for(i=1; i<=n; i++)
    {
        for(j=1; j<=2; j++)
        {
            cin>>p[i][j];
            if(j==1)
                total-=p[i][j];
            else
                total+=p[i][j];
            if(total>minm)
                minm=total;
        }
    }
    cout<<minm;
    return 0;
}
