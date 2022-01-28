#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int T;
	cin >> T;
	while(T--)
	{
	    int sal;
	    cin >> sal;
	    double da=0.0, hra=0.0;
	    if(sal<1500)
	    {
	        hra = sal*0.1;
	        da = sal*0.9;
	    }
	    else
	    {
	        hra = 500.0;
	        da = 0.98*sal;
	    }
	    double tsal = sal+hra+da;
	    cout << fixed << setprecision(6);
	    cout << tsal << endl;
	}
	return 0;
}
