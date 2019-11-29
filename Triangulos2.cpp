#include <bits/stdc++.h>

using namespace std;

int main() {
    int i, n;
    cin >> n;
    int x[n];
    for(i=0; i<n; i++) {
        cin >> x[i];
    }
    sort(x, x+n);
    reverse(x, x+n);
    if((x[1]+x[2])>x[0]) {
        cout << x[0]+x[1]+x[2] << endl;
    }
    else {
        cout << -1 << endl;    
    }
    cin.get();
    return 0;    
}