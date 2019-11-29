#include <iostream>

using namespace std;

int main() {
    int i, n;
    cin >> n;
    int x[n];
    for(i=0; i<n; i++) {
        cin >> x[i];    
    }
    for(i=(n-1); i>=0; i--) {
        cout << x[i]*x[i] << endl;    
    }    
    cin.get();
    return 0;    
}