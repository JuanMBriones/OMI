#include <iostream>
#include <stack>

using namespace std;

int main() {
    int maxi = 0;
    stack<int> s;
    string n;
    cin >> n;
    for(int i=0; i<n.size(); i++) {
        if(n[i]=='(') {
            s.push(1);
        }
        else {
            s.pop();
        }
        if(s.size()>maxi) {
            maxi = s.size();
        }
    }
    cout << maxi << endl;
    cin.get();
    return 0;
}