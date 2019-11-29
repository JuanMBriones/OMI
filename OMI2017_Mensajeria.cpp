#include <iostream>
//#include <vector>
#define opt_io cin.tie(0);ios_base::sync_with_stdio(0);

using namespace std;
// (ada(iad)pmilO)

// 5
//10101
// 1 2 4 8 16
// 1+4+16
// 21
// 16 o 32
// 21-16 = 5
// 5+4 = 9
int main() {
    opt_io
    int i, n, k, costo = 0, a, maximo = 0;
    bool flag = false;
    cin >> n >> k;
    for(i=0; i<n; i++) {
        cin >> a;
        maximo = max(a, maximo);
        if(a>k) {
            costo += k;
            flag = true;
        }
        else {
            costo += a;
        }
        
    }
    cout << ((flag)? costo : costo-maximo+k) << endl;
    cin.get();
    return 0;
}