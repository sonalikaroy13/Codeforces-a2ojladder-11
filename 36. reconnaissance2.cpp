#include <bits/stdc++.h>
#define FAST cin.tie(0);cout.tie(0);ios_base::sync_with_stdio(false);

using namespace std;
int main()
{
	int n, a1, a2, d=1000;
	cin>>n;
	int* a = new int[n];
	for(int i=0; i<n; i++)
		cin>>a[i];
	for(int j=0; j<n-1; j++)
	{
		if(abs(a[j]-a[j+1]) < d)
        {
			d = abs(a[j]-a[j+1]);
			a1=j+1;
			a2=j+2;
		}
	}
	if(abs(a[0]-a[n-1]) < d) {
		a1=1;
		a2=n;
	}
	cout<<a1<<" "<<a2;
	return 0;
}
