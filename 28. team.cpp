#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, ques=0, sure, Q[1010][4];
	cin>>n;
	for(int i=0; i<n; i++)
    {
        sure=0;
        for(int j=0; j<3; j++)
        {
            cin>>Q[i][j];
            if(Q[i][j]==1)
            {
                sure++;
            }
        }
        if(sure>1)
            ques++;
    }
    cout<<ques;
	return 0;
}
