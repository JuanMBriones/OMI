#include <iostream>
#include <algorithm>
#define opt_io cin.tie(0);ios_base::sync_with_stdio(0);

using namespace std;

int main() {
    opt_io
    int n, i;
    cin >> n;
    int a[n];
    for(i=0; i<n; i++) {
        cin >> a[i];
    }
    for(i=(n-1); i>=0; i--) {
        cout << a[i] << endl;
    }
    return 0;    
}