#include <iostream>
using namespace std;

#define ll long long

int main() {
	// your code goes here
	ll t, n;
	cin >> t;
	while (t--) {
	    cin >> n;
	    ll count = 0;
	    while (n > 0) {
	        int mod = n % 10;
	        if (mod == 4) count++;
	        n /= 10;
	    }
	    cout << count << '\n';
	}
	
	return 0;
}
