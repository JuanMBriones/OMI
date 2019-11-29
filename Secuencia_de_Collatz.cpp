#include <bits/stdc++.h>

using namespace std;

int cont(int n) {
    if(n==1) {
        return 1;    
    }  
    else if(n%2) {
        return cont(3*n+1)+1;        
    }
    else {
        return cont(n/2)+1;    
    }
}

int main() {
    int n;
    cin >> n;
    cout << cont(n) << endl;
    cin.get();
    return 0;
}