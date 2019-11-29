#include <iostream>

using namespace std;

int main() {
    int n, i, j, t = 0;
    cin >> n;
    for(i=0; i<n; i++) {
        for(j=0; j<n; j++) {
            if(((i+1)%2)==0 && j!=t) {
                cout << "a";
            }
            else if(((i+1)%2)==1 && j!=t) {
                cout << "o";
            }
            else {
                cout << "X";
            }
        }
        t++;
        cout << endl;
    }
    cin.get();
    return 0;
}
