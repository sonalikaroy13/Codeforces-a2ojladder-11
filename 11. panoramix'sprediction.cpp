#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i, n, m, ans=0;
    cin>>n>>m;
    for(i=n+1 ; i<=m; i++)
    {
        int flag=0;
        for(int k=2; k<i; k++)
        {
            if((i%k)==0)
            {
                flag=1;
                break;
            }
            else continue;
        }
        if(flag == 0 && i==m){
            cout<<"YES";
            ans=1;
            break;
        }
        else if(flag == 0 && i!=m)
        {
            cout<<"NO";
            ans=1;
            break;
        }
        else continue;
    }
    if(ans==0)
        cout<<"NO";
    return 0;
}
