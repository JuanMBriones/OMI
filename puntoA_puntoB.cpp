#include <bits/stdc++.h>

using namespace std;

int main() {
    int i, n, s = 0;
    cin >> n;
    double num;
    for(i=0; i<n; i++) {
        cin >> num;
        s += ((int)(num*10))%10;

    }
    cout << s << endl;
    cin.get();
    return 0;
}