#include <iostream>
using namespace std;


int main(void) {
   int t, n;
   cin >> t;
   while(t--) {
       int total_zeros = 0;
       cin >> n;
       while(n > 0) {
           total_zeros += n / 5;
           n /= 5;
       }
       cout << total_zeros << endl;
   }
}
