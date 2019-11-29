#include <iostream>
#include <math.h>

using namespace std;
/*
0 9 5 2 7   | 14
5 2 9 2 5   |
*/
int main() {
    int i, j, r = 0;
    int x[5], y[5];
    for(i=0; i<5; i++) {
        cin >> x[i];
    }
    for(i=0; i<5; i++) {
        cin >> y[i];
    }
    for(i=0; i<5; i++) {
        int s = abs(x[i]-y[i]);
        if(s!=0 && s>=(10-s)) {
            r += 10-s;
        }
        else if(s!=0) {
            r += s;
        }
    }
    cout << r << endl;
    cin.get();
    return 0;
}
