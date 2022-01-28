#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t; cin >> t;
	while(t--){
	     int n, k; cin >> n >> k;
	     int a[n], ans=0;
	     for(int i=0; i<n; i++){
	          cin >> a[i];
	          if((a[i]+k)%7==0)
	               ans++;
	     }
	     cout << ans << endl;
	}
	return 0;
}
