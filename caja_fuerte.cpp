#include <iostream>

using namespace std;

int main()
{
    int n = 0, t1 = 0, t2 = 0, t3 = 0, v = 0;
  cin >> n;
  cin >> t1 >> t2 >> t3;
while(n!=0 || t1!=0 || t2!=0 || t3!=0) {
  v = n + n + (n-1);
  if(t1>t2) {
    v += n + n - t1 + t2;
      }
      else {
          v += n + t2 - t1;
          }
          if(t2>t3) {
                v += t2 - t3;
              }
              else {
                    v += n - t3 + t2;
                  }
                  cout << v << endl;
                  n = 0, t1 = 0, t2 = 0, t3 = 0, v = 0;
                  cin >> n;
                  cin >> t1 >> t2 >> t3;
}
}