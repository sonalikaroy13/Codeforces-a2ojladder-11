#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    int i, upper=0, lower=0;
    cin>>s;
    for(i=0 ; i<s.length(); i++)
    {
        if(isupper(s[i]))
        {
            upper++;
        }else lower++;
    }
    if(upper>lower)
    {
        for(i=0; i<s.length(); i++)
        {
            putchar(toupper(s[i]));
        }
    }
    else
    {
        for(i=0; i<s.length(); i++)
        {
            putchar(tolower(s[i]));
        }
    }
    return 0;
}
