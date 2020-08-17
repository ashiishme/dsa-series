/**
 * Name: Reverse The Number
 * Problem link: https://www.codechef.com/LRNDSA01/problems/FLOW007/
 * Author: Ashish Yadav <https://github.com/ashiishme>
 */

#include <iostream>
using namespace std;

int main(void) {
    int t, number, reversed_number = 0;
    cin >> t;
    while(t--) {
        cin >> number;
        while(number != 0) {
            reversed_number = (reversed_number * 10) + (number % 10);
            number /= 10;
        }
        cout << reversed_number << endl;
        reversed_number = 0;
    }
}