#include<bits/stdc++.h>
using namespace std;

int main()
{
    int i, n;
    float p[110], sum=0.0;
    cin>>n;
    for(i=1; i<=n; i++)
    {
        cin>>p[i];
        sum += p[i];
    }
    cout<<sum/n;
    return 0;
}
