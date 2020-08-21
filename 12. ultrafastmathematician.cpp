#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i, j;
    string m, n;
    cin>>m>>n;
    int s= m.length();
    for(i=0 ; i<s; i++)
    {
        if(m[i]==n[i])
            cout<<0;
        else
            cout<<1;
    }
    return 0;
}
