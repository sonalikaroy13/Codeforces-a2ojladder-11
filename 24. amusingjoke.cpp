#include <bits/stdc++.h>
using namespace std;

int main() {
	string guest, host, mixed;
	cin>>guest>>host>>mixed;
	string total = guest + host;
	sort(total.begin(), total.end());
	sort(mixed.begin(), mixed.end());
	if(total == mixed){
	    cout<<"YES";
	}
	else
	    cout<<"NO";
	return 0;
}
