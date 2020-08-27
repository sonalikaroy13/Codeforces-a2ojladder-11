#include<bits/stdc++.h>
using namespace std;

int main()
{
    int i, n;
    string s;
    cin>>s;
    n=s.length();
    for(int l=0; l<n; l+=2)
    {
        for(i=0; i<n-l; i+=2)
        {
            if(s[i]<s[i-2])
            {
                int t=s[i];
                s[i]=s[i-2];
                s[i-2]=t;
            }
            else continue;
        }
    }
    cout<<s;
    return 0;
}