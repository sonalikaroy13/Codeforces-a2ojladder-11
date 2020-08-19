#include <bits/stdc++.h>
using namespace std;

int main()
{
    int y, dig1, dig2, dig3, dig4;
    cin>>y;
    int n=y+1;
    for(n; n<=9100; n++)
    {
        dig1 = n % 10;
        dig2 = (n/10) % 10;
        dig3 = (n/100) % 10;
        dig4 = (n/1000) % 10;
        if(dig1==dig2 || dig1==dig3 || dig1==dig4 || dig2==dig3 || dig2==dig4 || dig3==dig4){
            continue;
        }
        else{
            break;
        }
    }
    cout<<n;
    return 0;
}