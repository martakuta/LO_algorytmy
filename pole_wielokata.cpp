#include <bits/stdc+.h>
using namespace std;

struct w {
	int x;
	int y;
	int cw;
};

w T[1000];

bool sortowanie_katowe (w a, w b) {
	if (T[a].cw > T[b].cw)
		return true;
	if (T[a].cw < T[b].cw)
		return false;
	if (T[a].cw == T[b].cw) {
		int tga=10000, tgb=10000;
		if (T[a].cw == 1) {
			tga = (tga*T[a].y)/T[a].x;
			tgb = (tgb*T[b].y)/T[b].x;
			if (tga < tgb)
				//..................
		}
	}
}

int main () {
	ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	int n;
	cin>> n; 
	for (int i=0; i<n; i++) {
		cin>> T[i].x >> T[i].y;
		if (x>0 && y>=0)
			T[i].cw = 1;
		if (x<=0 && y>0)
			T[i].cw = 2;
		if (x<0 && y<=0)
			T[i].cw = 3;
		if (x>=0 && y<0)
			T[i].cw = 4;
	}
	sort (T, T+n, sortowanie_katowe);
	return 0;
}
