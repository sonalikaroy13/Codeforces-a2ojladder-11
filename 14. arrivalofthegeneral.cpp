#include<bits/stdc++.h>
using namespace std;

int main()
{
    int i, n, A[105], maxm=0, minm=0, maxpos=1, minpos=1, swaps=0;
    cin>>n;
    for(i=1; i<=n; i++)
    {
        cin>>A[i];
        if(i==1)
        {
            maxm=A[i];
            minm=A[i];
        }
        else
        {
            if(A[i]>maxm)
            {
                maxm=A[i];
                maxpos=i;
            }
            if(A[i]<=minm)
            {
                minm=A[i];
                minpos=i;
            }
        }
    }
    if(maxpos==1 && minpos==n)
    {
         swaps=0;
    }
    else
    {
        if(maxpos!=1)
        {
            for(maxpos ; maxpos>1; maxpos--)
            {
                swaps++;
                if(maxpos-1==minpos)
                    minpos++;
                else continue;
                int d = A[maxpos-1];
                A[maxpos-1] = maxm;
                A[maxpos] = d;
            }
        }
        if(minpos!=n)
        {
            for(minpos; minpos<n; minpos++)
            {
                swaps++;
                int d = A[minpos+1];
                A[minpos+1] = A[minpos];
                A[minpos] = d;
            }
        }
    }
    cout<<swaps;
    return 0;
}
