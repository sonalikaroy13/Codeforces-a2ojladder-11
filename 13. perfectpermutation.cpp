#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i, n;
    cin>>n;
    if(n%2==0)
    {
        for(i=1 ; i<=n; i+=2)
        {
            cout<<i+1<<"\n"<<i<<"\n";
        }
    }
    else
    {
        cout<<-1;
    }
    return 0;
}
