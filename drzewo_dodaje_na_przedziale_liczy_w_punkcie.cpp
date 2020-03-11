//dodaje na przedziale i liczy w punkcie
#include <bits/stdc++.h>
using namespace std;

const int M = 1024;
int d[2*M];

void dodaj (int p, int k, int w) {
	p += M;
	k += M;
	d[p] += w;
	if (p != k)
		d[k] += w;
	while (p/2 != k/2) {
		if (p%2 == 0)
			d[p+1] += w;
		if (k%2 == 1)
			d[k-1] += w;
		p /= 2;
		k /= 2;
	}
}

int sum(int v) {
	v += M;
	int wynik = d[v];
	while (v>1) {
		v /= 2;
		wynik += d[v];
	}
	return wynik;
}

int main () {
	ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	int n;
	cin>> n;
	for (int i=1; i<=n; i++)
		cin>> d[i+M];
	int q;
	cin>> q;
	for (int i=0; i<q; i++) {
		char znak;
		cin>> znak;
		if (znak == 'a') {
			int p,k,w;
			cin>> p >> k >> w;
			dodaj(p,k,w);
		} else if (znak == 'b') {
			int v;
			cin>> v;
			cout<< sum(v) << "\n";;
		}
	}
	return 0;
}
