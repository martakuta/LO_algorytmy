#include <bits/stdc++.h>
using namespace std;

#define f first
#define s second
#define mp make_pair

vector <pair <int, int> > G[1000*1000+5];
int odl[1000*1000+5];
bool odw[1000*1000+5];
const int inf = 1000*1000*1000;
int n;

void dijkstra (int v) {
	for (int i=1; i<=n; i++) {
		odl[i] = inf;
		odw[i] = 0;
	}
	odl[v] = 0;
	priority_queue <pair <int, int> > q;
	q.push(mp(0,v));
	while (!q.empty()) {
		int u = q.top().s;
		int ucost = -q.top().f;
		q.pop();
		if (odw[u] == 1)
			continue;
		odw[u] = 1;
		for (int i=0; i<G[u].size(); i++) {
			int x = G[u][i].s;
			int xcost = G[u][i].f;
			if (xcost + ucost < odl[x]) {
				odl[x] = xcost + ucost;
				q.push(mp(-odl[x], x));
			}
		}	
	}
}

int main () {
	ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	int m;
	cin>> n >> m;
	for (int i=0; i<m; i++) {
		int a, b, w;
		cin>> a >> b >> w;
		G[a].push_back(mp(w,b));
		G[b].push_back(mp(w,a));
	}
	int q;
	cin>> q;
	for (int i=0; i<q; i++) {
		int v;
		cin>> v;
		dijkstra(v);
		for (int j=1; j<=n; j++)
			cout<< odl[j] << " ";
		cout<< "\n";
	}
	return 0;
}
