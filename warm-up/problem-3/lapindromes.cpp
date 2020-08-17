#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main(void) {
   int t = 0, mid;
   string s;
   string s1, s2;
   cin >> t;
   cin.sync();
   while(t--) {
       getline(cin, s);
       int length = s.length();
       int reminder = length % 2;
       int half = length / 2;

       if(reminder == 0) s2 = s.substr(half, half);
       else s2 = s.substr(half + 1, half);

       s1 = s.substr(0, half);

       sort(s1.begin(), s1.end());
       sort(s2.begin(), s2.end());
       if(s1 == s2) cout << "YES" << endl;
       else cout << "NO" << endl;
   }
}
