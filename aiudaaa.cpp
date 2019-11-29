#include <iostream>

using namespace std;

int main() {
	string s;
	int cont = 0;
	cin >> s;
	for(int i=4; i<s.size(); i++) {
		if(s[i]=='a') {
			cont++;
		}	
	}
	cout << cont << endl;
	cin.get();
	return 0;
}