#include <iostream>

using namespace std;

int main() {
    int a, b, k;
    cin >> a >> b >> k;
    if(k==0) {
        cout << a+b << endl;    
    }
    else if(k==1) {
        cout << a-b << endl;
    }
    else if(k==2) {
        cout << a*b << endl;
    }
    else {
        cout << a/b << endl;
    }
    cin.get();
    return 0;
}