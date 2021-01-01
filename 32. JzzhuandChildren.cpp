#include <bits/stdc++.h>
using namespace std;

int main()
{
    cin.tie(0);
    cout.tie(0);
    ios_base::sync_with_stdio(false);
    int n;
    float m, a[101], b[101], c[101];
    cin>>n>>m;
    for(int i=0; i<n; i++)
    {
        cin>>a[i];
        b[i]=ceil(a[i]/m);
        c[i]=b[i];
    }
    sort(c, c+n);
    int maxdiv=c[n-1];
    if(maxdiv==0)
        cout<<n;
    else
    {
        for(int i=n-1; i>=0 ; i--)
        {
            if(b[i]==maxdiv)
            {
                cout<<i+1;
                break;
            }
        }
    }
    return 0;
}
