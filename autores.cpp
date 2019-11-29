#include <bits/stdc++.h>
#define opt_io cin.tie(0);ios_base::sync_with_stdio(0);

using namespace std;

int main() {
	opt_io
	string s;
	cin >> s;
	for(int i=0; i<s.size(); i++) {
		if(s[i]>='A' && s[i]<='Z') {
			cout << s[i];
		}
	}
	cout << endl;
	cin.get();
	return 0;
}