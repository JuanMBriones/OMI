#include <iostream>

using namespace std;

int main() {
    int n, m, i, j, t = 0, ma = 0, c[2] = {0,0};
    cin >> n >> m;
    int x[n][m];
    for(i=0; i<n; i++) {
        for(j=0; j<m; j++) {
            cin >> x[i][j];
        }
    }
    for(i=0; i<n; i++) {
        for(j=0; j<m; j++) {
            if(i<(n-2) && j<(m-2)) {
                if(t==0) {
                    t++;
                    ma = x[i][j]+x[i][j+1]+x[i][j+2]+x[i+1][j]+x[i+1][j+1]+x[i+1][j+2]+x[i+2][j]+x[i+2][j+1]+x[i+2][j+2];
                    c[0] = i, c[1] = j;
                }
                if(x[i][j]+x[i][j+1]+x[i][j+2]+x[i+1][j]+x[i+1][j+1]+x[i+1][j+2]+x[i+2][j]+x[i+2][j+1]+x[i+2][j+2]>ma) {
                    ma = x[i][j]+x[i][j+1]+x[i][j+2]+x[i+1][j]+x[i+1][j+1]+x[i+1][j+2]+x[i+2][j]+x[i+2][j+1]+x[i+2][j+2];
                    c[0] = i, c[1] = j;
                }
            }
        }
    }
    cout << ma << endl << c[0]+1 << " " << c[1]+1 << endl;
    cin.get();
    return 0;
}
