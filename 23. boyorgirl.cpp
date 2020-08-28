#include<bits/stdc++.h>
using namespace std;

int main()
{
    int dist=0;
    string s;
    cin>>s;
    for(int i = 0; i<s.length(); i++)
    {
        for(int j = 0; j<i; j++)
        {
            if(s[i]==s[j])
            {
                dist--;
                break;
            }
            else
                continue;
        }
        dist++;
    }
    if(dist%2==0)
        cout<<"CHAT WITH HER!";
    else cout<<"IGNORE HIM!";
    return 0;
}
