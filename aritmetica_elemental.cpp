#include <bits/stdc++.h>

using namespace std;

int toi(char c) {
	return c-48;
}
void rev(string &a, string &b) {
	int i;
	string s;
	for(i=0; i<a.size(); i++) {
		s[i] = a[i];
	}
	for(i=0; i<a.size(); i++) {
		a[i] = s[a.size()-i-1];
	}
	for(i=0; i<b.size(); i++) {
		s[i] = b[i];
	}
	for(i=0; i<b.size(); i++) {
		b[i] = s[b.size()-i-1];
	}
}
/*
123456		2
123456  

199
  1
991
1

*/
int main() {
	int i, r = 0, t = 0, f;
	string a, b;
	cin >> a >> b;
	rev(a, b);
	int s = (a.size()>b.size())? a.size() : b.size();
	int inf = (a.size()>b.size())? b.size() : a.size(); 
	for(i=0; i<s; i++) {
		if(i<=a.size()-1 && i>b.size()-1) {
			if(toi(a[i])+t>9) {
				t = 1;
				r++;
			}
			else {
				t = 0;
			}
		}
		else if(i<=b.size()-1 && i>a.size()-1) {
			if(toi(b[i])+t>9) {
				t = 1;
				r++;
			}
			else {
				t = 0;
			}
		}
		else {
			if((toi(a[i])+toi(b[i])+t)>9) {
				t = 1;
				r++;
			} 
			else {
				t = 0;
			}
		}
	}
	cout << r << endl;
	cin.get();
	return 0;
}