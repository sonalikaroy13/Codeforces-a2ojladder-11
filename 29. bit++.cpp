#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, ans=0, X=0, flag=0;
    string s[1010];
    cin>>n;
	for(int i=0; i<n; i++)
    {
        cin>>s[i];
        flag=0;
        for(int j=0; j<2; j++)
        {
            if(s[i][j]=='+' && flag==0)
            {
                ans+=1;
                flag=1;
            }
            else if(s[i][j]=='-' && flag==0)
            {
                ans-=1;
                flag=1;
            }
        }
    }
    cout<<ans;
	return 0;
}
