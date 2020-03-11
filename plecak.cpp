#include <bits/stdc++.h>
using namespace std;

int T[1000*1000+5];
int pl;

void plecak (int obj, int war) {
	T[obj] = max (T[obj], war);
	for (int i=1; i<=pl; i++) {
		if (T[i] != 0) {
			T[i+obj] = max (T[i+obj], T[i]+war);
		}
	}
}

int main () {
	ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	int n;
	cin>> pl >> n; //n to ilosc roznych przedmiotow
	for (int i=0; i<n; i++) {
		int obj, war;
		cin>> obj >> war;
		plecak(obj, war);
		for (int i=1; i<=pl; i++)
			cout<< T[i] << " ";
		cout<< "\n";
	}
	return 0;
}
