#include <bits/stdc++.h>
using namespace std;

int main()
{
    cin.tie(0);
    cout.tie(0);
    ios_base::sync_with_stdio(false);
    int n, pos, m, num;
    int* arr=new int[100000];
    long long appV=0, appP=0;
    cin>>n;
    for(int i=1; i<=n; i++)
    {
        cin>>pos;
        arr[pos]=i;
    }
    cin>>m;
    for(int i=1; i<=m; i++)
    {
        cin>>num;
        appV+=arr[num];
        appP+=n-arr[num]+1;
    }
    cout<<appV<<" "<<appP;
    return 0;
}

