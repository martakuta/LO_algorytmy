//liczy na przedziale i dodaje w punkcie
#include <bits/stdc++.h>
using namespace std;

const int M = 1024;
int d[M*2];

int sum (int p, int k) {
	p += M;
	k += M;
	int wynik = d[p];
	if (p != k)
		wynik += d[k];
	while (p/2 != k/2) {
		if (p%2 == 0)
			wynik += d[p+1];
		if (k%2 == 1)
			wynik += d[k-1];
		p /= 2;
		k /= 2;
	}
	return wynik;
}

void dodaj (int v, int w) {
	v += M;
	d[v] = w;
	while (v > 1) {
		v /= 2;
		d[v] = d[2*v] + d[2*v+1];
	}
}

int main () {
	ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	int n;
	cin>> n;
	for (int i=1; i<=n; i++) {
		cin>> d[i+M];
	}
	for (int i=M-1; i>0; i--)
		d[i] = d[2*i] + d[2*i+1];
	int q;
	cin>> q;
	for (int i=0; i<q; i++) {
		char znak;
		cin>> znak;
		if (znak == 'a') {
			int p, k;
			cin>> p >> k;
			cout<< sum(p,k);
		}
		else if (znak == 'b') {
			int v, w;
			cin>> v >> w;
			dodaj(v,w);
		}
	}
	return 0;
}	
