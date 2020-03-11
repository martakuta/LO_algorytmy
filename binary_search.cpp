#include <bits/stdc++.h>
using namespace std;

int T[1000*1000+5];
int n;

int bin (int x) {
	int p=-1, k=n;
	while (p+1<k) {
		int s = (p+k)/2;
		if (T[s] >= x)
			k = s;
		else
			p = s;
	}
	return k;
}

int main () {
	ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	cin>> n;
	for (int i=0; i<n; i++)
		cin>> T[i];
	int q;
	cin>> q;
	for (int i=0; i<q; i++) {
		int x;
		cin>> x;
		int wynik = bin(x);
		cout<< wynik << "\n";
	}
	return 0;
}
