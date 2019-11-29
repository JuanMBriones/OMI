#include <bits/stdc++.h>
#define opt_io cin.tie(0);ios_base::sync_with_stdio(0);

using namespace std;

int busca(int n, int m) {
    if(n==1) {
        return m;
    }
    else if(m==1) {
        return n;
    }
    else if(n==m) {
        return 1;
    }
    else  {
        int a = min(n, m), b = max(n, m);
        return busca(a, b%a)+(b/a);
    }
}

int main() {
    opt_io
    int n, m;
    cin >> n >> m;
    cout << busca(n, m) << endl;
    cin.get();
    return 0;
}