#include<bits/stdc++.h>
using namespace std;

int main()
{
    int i, n, count=0;
    string s;
    cin >> n >> s;
    for (i=1; i<n; i++)
    {
        if (s[i]==s[i-1])
            count++;
        else
            continue;
    }
    cout << count;
    return 0;
}
