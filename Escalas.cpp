#include <bits/stdc++.h>
#define opt_io cin.tie(0);ios_base::sync_with_stdio(0);

using namespace std;

int main() {
	opt_io
	vector<int> vec;
	int i, a;
	for(i=0; i<8; i++) {
		cin >> a;
		vec.push_back(a);
	}
	if(is_sorted(vec.begin(), vec.end())) {
		cout << "ascending" << endl;
	}
	else {
		reverse(vec.begin(), vec.end());
		if(is_sorted(vec.begin(), vec.end())) {
			cout << "descending" << endl;
		}	
		else {
			cout << "mixed" << endl;
		}
	}
	cin.get();
	return 0;
}