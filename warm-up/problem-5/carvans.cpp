/**
 * Name: Carvans
 * Problem link: https://www.codechef.com/LRNDSA01/problems/CARVANS
 * Author: Ashish Yadav <https://github.com/ashiishme>
 */

#include <bits/stdc++.h>

using namespace std;

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t, n;
    cin >> t;

    while(t--) {
        cin >> n;
        int frontCar = INT_MAX;
        int carSpeed;
        int totalCars = 0;
        while(n--) {
            cin >> carSpeed;
            if(carSpeed <= frontCar) {
                frontCar = carSpeed;
                totalCars += 1;
            }
        }
        cout << totalCars << "\n";
    }

}
