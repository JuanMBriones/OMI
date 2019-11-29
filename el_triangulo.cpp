#include <bits/stdc++.h>
#define opt_io cin.tie(0); ios_base::sync_with_stdio(0);


using namespace std;

int data[100][100], n, x[100][100] = {0};

int busca(int i, int j) {
    int  izq, der;
    if(i>n) {
        return 0;
    }
    if(data[i][j]==-1) {
        izq = busca(i+1, j);
        der = busca(i+1, j+1);
        data[i][j] = max(izq, der)+x[i][j];
    }
    return data[i][j];
}

int main() {
    opt_io
    int i, j;
    cin >> n;
    for(i=0; i<n; i++) {
        for(j=0; j<=i; j++) {
            cin >> x[i][j];
            data[i][j] = -1;
        }
    }
    cout << busca(0, 0) << endl;
    cin.get();
    return 0;
}