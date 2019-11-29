#include <iostream>
#include <algorithm>

using namespace std;

bool unico(int i, int j, int k, int l) {
    int x[10] = {0};
    x[i]++;
    x[j]++;
    x[k]++;
    x[l]++;
    sort(x, x+10);
    reverse(x, x+10);
    if(x[0]>1) {
        return false;
    }
    else {
        return true;
    }
}

int main() {
    int i, j, k, l, r1, r2, c1, c2, d1, d2;
    cin >> r1 >> r2 >> c1 >> c2 >> d1 >> d2;
    for(i=1; i<=9; i++) {
        for(j=1; j<=9; j++) {
            for(k=1; k<=9; k++) {
                for(l=1; l<=9; l++) {
                    if(r1==i+j && r2==k+l && c1==i+k && c2==j+l && d1==i+l && d2==j+k && unico(i, j, k, l)) {
                        cout << i << " " << j << endl << k << " " << l << endl;
                        return 0;
                    }
                }
            }
        }
    }
    cout << "-1" << endl;
    cin.get();
    return 0;
}
