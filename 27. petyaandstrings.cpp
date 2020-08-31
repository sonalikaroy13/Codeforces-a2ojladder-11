#include <bits/stdc++.h>
using namespace std;

int main()
{
    int flag=0;
    string s1, s2;
	cin>>s1>>s2;
	for(int i=0; i<s1.length(); i++)
    {
        if(tolower(s1[i])<tolower(s2[i]))
        {
            cout<<-1;
            flag=1;
            break;
        }
        else if(tolower(s1[i])>tolower(s2[i]))
        {
            cout<<1;
            flag=1;
            break;
        }
        else continue;
    }
    if(flag==0)
        cout<<0;
	return 0;
}
