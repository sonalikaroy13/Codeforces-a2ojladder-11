#include <bits/stdc++.h>
#define FAST cin.tie(0);cout.tie(0);ios_base::sync_with_stdio(false);

using namespace std;
int main()
{
    FAST;
    double s1, s2, s3;
    cin>>s1>>s2>>s3;
    double perimeter = 4*((pow(((s1*s2)/s3),0.5)) + (pow(((s2*s3)/s1),0.5)) + (pow(((s3*s1)/s2),0.5)));
    cout<<perimeter;
    return 0;
}
