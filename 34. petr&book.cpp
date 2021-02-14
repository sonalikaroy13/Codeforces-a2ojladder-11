#include <bits/stdc++.h>
#define FAST cin.tie(0);cout.tie(0);ios_base::sync_with_stdio(false);

using namespace std;
int main()
{
    FAST;
    int* arr=new int[8];
    int sum=0, n, rem=0, req=0;
    cin>>n;
    for(int i=1; i<=7; i++)
    {
        cin>>arr[i];
        sum+=arr[i];
    }
    rem=(n%sum);
    if(rem==0)
    {
        for(int i=7; i>0; i--)
        {
            if(arr[i]!=0)
            {
                cout<<i;
                break;
            }
        }
    }
    else
    {
        for(int i=1; i<=7; i++)
        {
            req+=arr[i];
            if(req>=rem)
            {
                cout<<i;
                break;
            }
        }
    }
    return 0;
}
