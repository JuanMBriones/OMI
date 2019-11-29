#include <iostream>
#include <string.h>

using namespace std;

int main() {
    int n, m, i;
    cin >> n >> m;
    string s(n, ' ');
    cout << "Sun Mon Tue Wed Thr Fri Sat" << endl << s;
    for(i=1; i<=m; i++) {
        if(((i+n-1)%7)==0) {
            cout << i << endl;
        }
        else {
            cout << i << " ";
        }
    }
    cin.get();
    return 0;
}
