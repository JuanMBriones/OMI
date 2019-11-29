#include <bits/stdc++.h>

using namespace std;

typedef long long int lli;

int main() {
    lli i, n, s = 0, charger1 = 0, charger2 = 0;
    cin >> n;
    lli x[n];
    for(i=0; i<n; i++) {
        cin >> x[i];
        s += x[i];
    }
    lli c[2][n] = {0}, iC1 = 0, iC2 = 0;
    for(i=0; i<n; i++) {
        if(charger1+x[i]<=(s/2)) {
            charger1 += x[i];
            c[0][iC1++] = i+1;
        }
        else if(charger2+x[i]<=(s/2)) {
            charger2 += x[i];
            c[1][iC2++] = i+1;
        }
        else if(charger1>(s/2) && charger2>(s/2)) {
            break;
        }
    }
    cout << iC1 << " ";
    for(i=0; i<iC1; i++) {
        cout << c[0][i] << " ";
    }
    cout << endl;
    cout << iC2 << " ";
    for(i=0; i<iC2; i++) {
        cout << c[1][i] << " ";
    }
    cout << endl;
    cin.get();
    return 0;
}