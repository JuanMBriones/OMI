#include <bits/stdc++.h>

using namespace std;

int main() {
    int a, b, c;
    cin >> a >> b >> c;
    if(a==60 && b==60 && c==60) {
        cout << "EQUILATERO" << endl;    
    }
    else if(a==90 || b==90 || c==90) {
        cout << "RECTANGULO" << endl;    
    }
    else if(a==b || a==c || b==c) {
        cout << "ISOSCELES" << endl;    
    }
    else {
        cout << "ESCALENO" << endl;        
    }
    cin.get();
    return 0;    
}