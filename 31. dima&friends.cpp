#include <bits/stdc++.h>
using namespace std;

int main()
{
    cin.tie(0);
    cout.tie(0);
    ios_base::sync_with_stdio(false);
    int n, sum=0, fi, count=0;
    cin>>n;
    for(int i=0; i<n; i++)
    {
        cin>>fi;
        sum += fi;
    }
    for(int i=1; i<=5; i++)
    {
        if((sum+i)%(n+1) != 1)
        count++;
    }
    cout<<count;
    return 0;
}