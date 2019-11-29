#include <bits/stdc++.h>

using namespace std;

int mcd(int a, int b) {
    if((max(a, b)%min(a, b))==0) {
        return min(a, b);
    }
    else {
        mcd(min(a, b), (max(a, b)%min(a, b)));
    }
}

int main() {
    int a, b;
    cin >> a >> b;
    cout << mcd(a, b) << endl;
    cin.get();
    return 0;
}