#include <bits/stdc++.h>
#define opt_io cin.tie(0);ios_base::sync_with_stdio(0);

using namespace std;

int main() {
    opt_io
    int i, j, k = 0, n, m;
    cin >> n >> m;
    int y[4] = {2*n+1, 1, 2*n+2, 2};
    for(i=0; i<n; i++) {
        for(j=0; j<4; j++) {
            if(y[j]+(2*k)<=m) {
                cout << y[j]+(2*k) << " ";
            }
        }
        k++;
    }
    cin.get();
    return 0;
}