#include <iostream>

using namespace std;
// 0101010101
// 0000000001
// &
// 0000000001
int main() {
    int n, a, i, s = 0;
    cin >> n;
    for(i=1; i<=n; i++) {
        cin >> a;
        //cout << r << endl;
        if((i & 1)==0) {
            s += a;
        }
    }
    cout << s << endl;
    return 0;
}