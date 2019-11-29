#include <bits/stdc++.h>
#include <vector>

using namespace std;

int main() {
	int i, j = 0;
	int x[10] = {0};
	for(i=0; i<10; i++) {
		cin >> x[i];
		if(i>=5 && x[i]!=x[i-5]) {
			j++;
		}
	}
	(j==5)? cout << "Y" : cout << "N";
	cout << endl;
	cin.get();
	return 0;
}