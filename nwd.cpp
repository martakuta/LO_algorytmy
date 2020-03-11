#include <bits/stdc++.h>
using namespace std;

int nwd (int a, int b) {
	if (b==0)
		return a;
	else
		return nwd(b, a%b);
}

int main () {
	ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	int q;
	cin>> q;
	for (int i=0; i<q; i++) {
		int a, b;
		cin>> a >> b;
		if (a < b)
			swap(a,b);
		int wynik = nwd(a,b);
		cout<< wynik << "\n";
	}
	return 0;
}
