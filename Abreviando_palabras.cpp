#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    string s;
    cin >> n >> s;
    if(n>10) {
        cout << s[0] << n-2 << s[n-1] << endl;
    }
    else {
        cout << s << endl;    
    } 
    cin.get();
    return 0;    
}