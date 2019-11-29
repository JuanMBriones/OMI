#include <bits/stdc++.h>

using namespace std;

int div(string s) {
    int i, d = 2, sum = 0;
    for(i=0; i<s.size(); i++) {
        sum += ((s[i]>=97)? s[i]-32 : s[i]);
    }
    //cout << sum << endl;
    for(i=2; i<=(sum/2); i++) {
        if(!(sum%i)) {
            d++;
        }
    }
    return d;
}

int main() {
    //cout << (int)'a' << " " << (int)'A' << endl;
    string s;
    cin >> s;
    cout << div(s) << endl;
    cin.get();
    return 0;
}