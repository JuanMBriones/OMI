#include <bits/stdc++.h>

using namespace std;
/*
A = 65
Z = 90
*/
int main() {
	int n, m, i, j, x[26], r = 0;
	cin >> n;
	char mex[n];
	for(i=0; i<n; i++) {
		cin >> mex[i];
	}
	cin >> m;
	char col[m];
	for(i=0; i<m; i++) {
		cin >> col[i];
	}
	for(i=0; i<26; i++) {
		cin >> x[i];
	}
	/*for(int i='A'; i<='Z'; i++) {
		cout << (char)i << " " << (int)i << endl;
	}*/
	for(i=0; i<n; i++) {
		for(j=0; j<m; j++) {
			if(mex[i]==col[j]) {
				//cout << "Entre" << endl; 
				r += x[mex[i]-65];
				mex[i] = '0';
				col[j] = '0';
				break;
			}
		}
	}
	/*
	for(i=0; i<men; i++) {
		r += arr[men[i]-65];
	}*/
	cout << r << endl;
	/*sort(mex, mex+n);
	sort(col, col+n);
	for(i=0; i<n; i++) {
		cout << mex[i] << " ";
	}
	cout << endl;
	for(i=0; i<m; i++) {
		cout << col[i] << " ";
	}
	cout << endl;*/
	cin.get();
	return 0;
}