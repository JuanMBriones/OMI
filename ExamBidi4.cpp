#include <iostream>

using namespace std;

int main() {
    int n, i, j, t = 0;
    cin >> n;
    for(i=0; i<n; i++) {
        for(j=0; j<n; j++) {
            if((((i+1)>(n/2)) && ((j+1)<=(n/2))) || ((j+1)>(n/2)) && ((i+1)<=(n/2))) {
                cout << "1";
            }
            else {
                cout << "0";
            }
        }
        cout << endl;
    }
    cin.get();
    return 0;
}
