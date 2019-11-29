#include <iostream>

using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    for(n; n>0; n--) {
        for(int i=0; i<m; i++) {
            cout << "*";    
        }   
        cout << endl;
    } 
    return 0;
}
