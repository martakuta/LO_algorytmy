#include <bits/stdc++.h>
using namespace std;

int rep[1000*1000+5];

int fin (int v) {
	if (rep[v] == v)
		return v;
	else
		return rep[v] = fin(rep[v]);
}

void onion (int a, int b) {
	rep[fin(b)] = fin(a);
}

int main () {
	ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	int n, m;
	cin>> n >> m;
	for (int i=1; i<=n; i++)
		rep[i] = i;
	for (int i=0; i<m; i++) {
		int a, b;
		cin>> a >> b;
		onion(a,b);
	}
	for (int i=1; i<=n; i++)
		fin(i);
	for (int i=1; i<=n; i++)
		cout<< rep[i] << " ";
	cout<< "\n";
	return 0;
}
