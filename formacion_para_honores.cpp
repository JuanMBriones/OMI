#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    int n, m, i;
    cin >> n >> m;
    int x[n];
    for(i=0; i<n; i++) {
        cin >> x[i];
    }
    sort(x, x+n);
    for(i=0; i<n; i++) {
        if(((i+1)%m)==0) {
            cout << x[i] << endl;
        }
        else {
            cout << x[i] << " ";
        }
    }
    cin.get();
    return 0;
}
