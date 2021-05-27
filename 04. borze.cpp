#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    int j=0;
    int n[200] = {};
    cin>>s;
    for(int i=0 ; i<s.length(); i++)
    {
        if(s[i]=='.')
        {
            n[j]=0;
            j++;
        }
        else if(s[i]=='-')
        {
            if(s[i+1]=='.')
            {
                n[j]=1;
            }
            else
            {
                n[j]=2;
            }
            i++;
            j++;
        }
    }
    for(int k=0; k<j; k++){
        cout<<n[k];
    }
    return 0;
}

