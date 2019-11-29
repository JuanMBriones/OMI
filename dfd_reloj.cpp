#include <iostream>

using namespace std;

int main() {
    int a, b, c;
    cin >> a >> b >> c;
    if(c==59) {
        c = 0;
        if(b==59) {
            b = 0;    
            if(a==23) {
                a = 0;    
            }
            else {
                a++;    
            }
        }
        else {
            b++;    
        }
    }
    else {
        c++;    
    }
    cout << a << ":" << b << ":" << c << endl;
    cin.get();
    return 0;    
}