#include <iostream>

using namespace std;

int main() {
    int n, m, i, e, t;
    cin >> n >> m;
    int x[m];
    for(i=0; i<m; i++) {
        x[i] = 0;
    }
    string s;
    for(i=0; i<m; i++) {
        cin >> e >> s;
        if(s=="INICIO") {
            cin >> t;
            x[e-1] -= t*60;
            cin >> t;
            x[e-1] -= t;
        }
        else {
            cin >> t;
            x[e-1] += t*60;
            cin >> t;
            x[e-1] += t;
        }
    }
    for(i=0; i<n; i++) {
        cout << x[i]/60 << " " << x[i]%60 << endl;
    }
    cin.get();
    return 0;
}