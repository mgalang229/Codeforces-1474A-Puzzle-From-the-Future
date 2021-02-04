#include <bits/stdc++.h>

using namespace std;
                                                   
int main() {                            
  ios::sync_with_stdio(false);
  cin.tie(0);          
  int tt;
  cin >> tt;
  while (tt--) {
  	int n;
  	cin >> n;
  	string a;
  	cin >> a;
  	// set the first character of the addend to 1 to avoid leading zeroes
  	string b = "1";
  	// start the iteration on the 2nd character
  	for (int i = 1; i < n; i++) {
  		if ('1' + a[i] != b[i - 1] + a[i - 1]) {
  			// if the current character + 1 is equal to the sum of the previous character and the addend
  			// if they're not equal, then print 1
  			b += "1";
  		} else {
  			// otherwise, print 0 to make every digit different from the previous digit
  			b += "0";
  		}
  	}
  	cout << b << '\n';
  }
  return 0;
}      
