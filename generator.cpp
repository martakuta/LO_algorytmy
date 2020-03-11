#include <bits/stdc++.h>
using namespace std;

int main () {
	ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	int seed;
	cin>> seed;
	srand(seed);
	int n;
	n = rand()%10+1; // od 1 do 10 liczb
	cout<< n << "\n";
	for (int i=0; i<n; i++) {
		int a;
		a = rand()%101; // o wartosciach od 0 do 100
		cout<< a << " ";
	}
	cout<< "\n";
	return 0;
}
