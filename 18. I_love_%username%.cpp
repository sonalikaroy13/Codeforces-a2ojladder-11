#include<bits/stdc++.h>
using namespace std;

int main()
{
    int i, n, worst=0, best=0, amazing=0;
    long p[10010];
    cin>>n;
    for(i=1; i<=n; i++)
    {
        cin>>p[i];
        if(i==1)
        {
            worst=p[i];
            best=p[i];
        }
        else
        {
            if(p[i]>best)
            {
                best=p[i];
                amazing++;
            }
            else if(p[i]<worst)
            {
                worst=p[i];
                amazing++;
            }
            else continue;
        }
    }
    cout<<amazing;
    return 0;
}
