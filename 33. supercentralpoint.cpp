#include <bits/stdc++.h>
#define FAST cin.tie(0);cout.tie(0);ios_base::sync_with_stdio(false);

using namespace std;
int main()
{
    FAST;
    int p[1010][3], n, low=0, up=0, left=0, right=0, cp=0;
    cin>>n;
    pair<int, int> arr[1000];
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<2; j++)
            cin>>p[i][j];
        arr[i] = make_pair((p[i][0]), (p[i][1]));
    }
    sort(arr, arr + n);
    for(int i=1; i<n-1; i++)
    {
        left=0; right=0; low=0; up=0;
        if(arr[i].first==arr[i-1].first && arr[i].first==arr[i+1].first)
        {
            low=1;
            up=1;
            for(int k=0; k<n; k++)
            {
                if(arr[i].second==arr[k].second)
                {
                    if(arr[k].first<arr[i].first)
                        left=1;
                    else if(arr[k].first>arr[i].first)
                        right=1;
                }
            }
            if(left==1 && right==1)
                cp++;
        }//cout << arr[i].first << " " << arr[i].second << endl;
    }
    cout<<cp;
    return 0;
}
