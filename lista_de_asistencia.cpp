#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    int i, j, n, m;
    cin >> n >> m;
    int x[m][n];
    int t[n];
    for(i=0; i<n; i++) {
            t[i] = 0;
    }
    for(i=0; i<m; i++) {
        for(j=0; j<n; j++) {
            cin >> x[i][j];
            t[j] += x[i][j];
        }
    }
    int maxi = *max_element(t, t+n);
    for(i=0; i<n; i++) {
        if(t[i]==maxi) {
            cout << i+1 << " ";
        }
    }
    cout << endl;
    cin.get();
    return 0;
}