#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int T;
	cin >> T;
	while(T--)
	{
	    int q, p;
	    cin >> q >> p;
	    double te = q*p;
	    if(q>1000)
	    {
	        te -= te*0.1;
	    }
	   cout << setprecision(10) << fixed;
	   cout << te << endl;
	}
	return 0;
}
