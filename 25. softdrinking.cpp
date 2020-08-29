#include <bits/stdc++.h>
using namespace std;

int main() {
	int n, k, l, c, d, p, nl, np;
	cin>>n>>k>>l>>c>>d>>p>>nl>>np;
	int total_drink = k*l;
	int total_lime = c*d;
	int total_salt = p;
	int p_drink = total_drink/nl;
	int p_lime = c*d;
	int p_salt = p/np;
	int toasts_prepared = (((p_drink>p_lime)?p_lime:p_drink)>p_salt?p_salt:((p_drink>p_lime)?p_lime:p_drink));
	cout<<toasts_prepared/n;
	return 0;
}
