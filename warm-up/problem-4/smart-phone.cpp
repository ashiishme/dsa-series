/**
 * Name: Smart Phone
 * Problem link: https://www.codechef.com/LRNDSA01/problems/ZCO14003
 * Author: Ashish Yadav <https://github.com/ashiishme>
 */

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(void) {
   int t;
   long long n, max = 0;
   vector<long long int> customers;
   cin >> t;
   int temp = t;
   while(t--) {
       cin >> n;
       customers.push_back(n);
   }

   sort(customers.begin(), customers.end());

   for(int i = 0; i < customers.size(); i++) {
       if(customers[i] * temp < max) {
           cout << max << endl;
           break;
       }
       max = customers[i] * temp;
       temp--;
   }

}
