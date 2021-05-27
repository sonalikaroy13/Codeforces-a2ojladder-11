#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    int i;
    cin>>s;
    for(i=0 ; i<s.length(); i++)
    {
        if(i==0)
        {
            putchar(toupper(s[i]));
            continue;
        }
        else
        {
            putchar((s[i]));
        }
    }
    return 0;
}
