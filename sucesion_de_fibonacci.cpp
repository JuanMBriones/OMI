#include <bits/stdc++.h>

using namespace std;

int main() {
	int n, i, x = 1, ant = 0, t = 0;
	cin >> n;
	for(i=1; i<=n; i++) {
		//cout << x << endl; 
		t = ant;
		ant = x;
		x += t;
	}
	cout << x << endl;
	cin.get();
	return 0;
}