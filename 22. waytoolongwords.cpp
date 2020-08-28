#include<bits/stdc++.h>
using namespace std;

int main()
{
    vector<string> words_vec;
    int n, len;
    cin>>n;
    for(int i = 0; i<n; i++)
    {
        string s;
        cin>>s;
        words_vec.push_back(s);
    }
    for(int i = 0; i<n; i++)
    {
        if(words_vec[i].length() > 10)
        {
            len = words_vec[i].length() - 2;
            cout<<words_vec[i][0]<<len<<words_vec[i][words_vec[i].length() - 1]<<endl;
        }
        else
        {
            cout<<words_vec[i]<<endl;
        }
    }
    return 0;
}
