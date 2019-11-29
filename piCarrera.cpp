#include <iostream>

using namespace std;

int main() {
    bool b = true;
    int m, t, u, f, d, i, r = 0;
    cin >>  m >> t >> u >> f >> d;
    char c;
    //int x[t];
    for(i=0; i<t; i++) {
        cin >> c;
        if(c=='U' && m>=(u+d) && b) {
            r++;
            m -= (d+u);
        }
        else if(c=='F' && m>=(2*f) && b) {
            r++;
            m -= (2*f);
        }
        else if(c=='D' && m>=(d+u) && b) {
            r++;
            m -= (d+u);
        }
        else {
            b = false;
        }
    }
    cout << r << endl;
    cin.get();
    return 0;
}
