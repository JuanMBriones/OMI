#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, suma = 0;
    while(cin >> n) {
        if(n==-1) {
            break;
        }
        else if(n>9 && n<101) {
            suma += n;
        }
    }
    cout << suma << endl;
    cin.get();
    return 0;
}