#include <iostream>

using namespace std;

int main() {
    int i, j, n, k;
    cin >> n >> k;
    int x[n];
    for(i=0; i<n; i++) {
        cin >> x[i];
    }
    int max = 0, s = 0;
    for(i=0; i<=n-k; i++) {
        for(j=0; j<k; j++) {
            s += x[i+j];
        }
        max = (s>max)? s : max;
        s = 0;
    }
    cout << max << endl;
    cin.get();
    return 0;
}