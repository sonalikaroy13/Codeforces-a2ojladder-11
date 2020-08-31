#include <bits/stdc++.h>
using namespace std;

int main()
{
    int flag=0;
	string p;
	cin>>p;
	for(int i=0; i<p.length(); i++)
    {
        if(p[i]=='H' || p[i]=='Q' || p[i]=='9')
        {
            cout<<"YES";
            flag=1;
            break;
        }
        else continue;
    }
    if(flag==0)
        cout<<"NO";
	return 0;
}
