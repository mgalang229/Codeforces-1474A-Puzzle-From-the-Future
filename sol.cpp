#include <bits/stdc++.h>

using namespace std;
                                                   
int main() {                            
  ios::sync_with_stdio(false);
  cin.tie(0);          
  int tt;
  cin >> tt;
  while (tt--) {
  	int n;
  	string s;
  	cin >> n >> s;  
  	// check the image in this repository of better understanding
  	// print 1 as the initial binary digit (to make it maximum)
  	// this problem about the addend part of the binary addition
  	// and we should make sure that there are no consecutive equal digits in our answer
  	cout << 1;
  	// then get the decimal value of the sum of the first character and 1 as the previous sum
  	int prev = s[0] - '0' + 1;
  	for (int i = 1; i < n; i++) {
  		if (s[i] - '0' + 1 == prev) {
  			// check if the sum of the current character + 1 is the same as the previous sum
  			// if yes, then print 0 to get the opposite character so it doesn't get erased
  			cout << 0;
  			// the current sum of the digits will become the previous sum for the next iteration
  			prev = s[i] - '0' + 0;
  		} else {
  			// the else condition handles if the sum of the current character + 0 is the same as the previos sum
  			// if yes, then print 1 to get the opposite character so it doesn't get erased
  			cout << 1;
  			// the current sum of the digits will become the previous sum for the next iteration
  			prev = s[i] - '0' + 1;
  		}
   	}
  	cout << '\n';
  }
  return 0;
}      
