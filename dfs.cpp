#include <bits/stdc++.h>
using namespace std;

bool odw[1000*1000+5];
vector <int> G[1000*1000+5];

void dfs (int v) {
	odw[v] = 1;
	for (int i=0; i<G[v].size(); i++) {
		if (odw[G[v][i]] == 0)
			dfs(G[v][i]);
	}
}

int main () {
	ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	int n, m;
	cin>> n >> m;
	for (int i=0; i<m; i++) {
		int a, b;
		cin>> a >> b;
		G[a].push_back(b);
		G[b].push_back(a);
	}
	int q;
	cin>> q;
	for (int i=0; i<q; i++) {
		int v;
		cin>> v;
		for (int i=1; i<=n; i++)
			odw[i] = 0;
		dfs(v);
		for (int j=1; j<=n; j++)
			cout<< odw[j] << " ";
		cout<< "\n";
	}
	return 0;
}
