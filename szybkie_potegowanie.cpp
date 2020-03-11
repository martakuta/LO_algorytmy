#include <bits/stdc++.h>
using namespace std;

int potega(int a, int b) {
	if (b==0)
		return 1;
	if (b==1)
		return a;
	if (b%2==0)
		return potega(a*a, b/2);
	if (b%2==1)
		return a*potega(a*a, b/2);
}

int main () {
	ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	int q;
	cin>> q;
	for (int i=0; i<q; i++) {
		int a, b;
		cin>> a >> b;
		int wynik = potega(a,b);
		cout<< wynik << "\n";
	}
	return 0;
}
