#include<bits/stdc++.h>
using namespace std;

int main()
{
    int i, k, l, m, n, killed=0;
    long d;
    cin>>k>>l>>m>>n>>d;
    for(i=1; i<=d; i++)
    {
        if(i%k==0)
        {
            killed++;
        }
        else if(i%l==0)
        {
            killed++;
        }

        else if(i%m==0)
        {
            killed++;
        }

        else if(i%n==0)
        {
            killed++;
        }
        else continue;
    }
    cout<<killed;
    return 0;
}
