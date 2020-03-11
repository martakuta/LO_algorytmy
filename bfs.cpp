#include <bits/stdc++.h>
using namespace std;

vector <int> G[1000*1000+5];
int odl[1000*1000+5];
const int inf = 1000*1000*1000;
int n;

void bfs (int v) {
	for (int i=1; i<=n; i++)
		odl[i] = inf;
	odl[v] = 0;
	queue <int> q;
	q.push(v);
	while (!q.empty()) {
		int u = q.front();
		q.pop();	
		for (int i=0; i<G[u].size(); i++) {
			if (odl[G[u][i]] > odl[u] + 1) {
				odl[G[u][i]] = odl[u] + 1;
				q.push(G[u][i]);
			}
		}
	}
}

int main () {
	ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	int m;
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
		bfs(v);
		for (int j=1; j<=n; j++)
			cout<< odl[j] << " ";
		cout<< "\n";
	}
	return 0;
}
