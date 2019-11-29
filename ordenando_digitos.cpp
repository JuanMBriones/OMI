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
    stable_sort(a, a+n);
    for(i=0; i<n; i++) {
        cout << a[i] << " ";
    }
    cout << endl;
    return 0;    
}