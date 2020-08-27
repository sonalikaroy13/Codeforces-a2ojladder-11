#include<bits/stdc++.h>
using namespace std;

int main()
{
    int i, j, req=0;
    long long s[5]={0};
    for(i=1; i<5; i++)
    {
        cin>>s[i];
        for(j=0; j<i; j++)
        {
            if(s[i]==s[j])
            {
                req++;
                break;
            }
        }
    }
    cout<<req;
    return 0;
}
