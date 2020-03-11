#include <bits/stdc++.h>
using namespace std;

int T[1000];

void sito() {
	for (int i=2; i<=1000; i++) {
		if (T[i] == 0) {
			for (int j=i; j<=1000; j+=i)
				T[j] = i;
		}
	}
}

int main () {
	ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	sito();
	int q;
	cin>> q;
	for (int i=0; i<q; i++) {
		int n;
		cin>> n;
		if (n == 1 || n == 0) {
			cout<< n << "\n";
			continue;
		}
		while (T[n] != 0) {
			cout<< T[n] << " ";
			n /= T[n];
		}
		cout<< "\n";
	}
	return 0;
}
