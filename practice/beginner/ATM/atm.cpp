/**
 * Name: ATM
 * Problem link: https://www.codechef.com/problems/HS08TEST
 * Author: Ashish Yadav <https://github.com/ashiishme>
 */

#include <iostream>

using namespace std;

int main(void) {

   int amount;
   float balance;

   cin >> amount;
   cin >> balance;
   if(balance > 0 && balance >= (amount + 0.50)) {
       if(amount % 5 == 0) cout << ( balance - amount ) - 0.50 << endl;
       else cout << balance << endl;
   } else {
       cout << balance << endl;
   }
}
