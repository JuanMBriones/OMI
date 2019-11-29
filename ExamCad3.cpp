#include <iostream>
#include <string>

using namespace std;

int main() {
    int i;
    string s;
    for(i=0; i<6; i++) {
        cin >> s;
        cout << s[s.size()-1];
        if(i==2) {
            cout << endl;
        }
    }
    cout << endl;
    cin.get();
    return 0;
}
