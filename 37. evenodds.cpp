#include <bits/stdc++.h>
#define FAST ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define ll long long int	
using namespace std;

int main() {
	FAST;
	ll n, k;
    cin>>n>>k;
    if(k<=ceil(n*0.5))
    {
        k=2*k-1;
    }
    else
    {
        ll d=ceil(n*0.5);
        k = (k-d)*2;     
    }
    cout<<k;
	cout<<endl;	    
	return 0;
}

