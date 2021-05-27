#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    ll n;
    int dig[25], i=0, lcount=0;
    cin>>n;
    while(n){
        dig[i] = (n % 10);
        n /= 10;
        if(dig[i]==4 || dig[i]==7)
        {
            lcount++;
        }
        i++;
    };
    if(lcount==4 || lcount==7)
    {
        cout<<"YES";
    }
    else cout<<"NO";
    return 0;
}
