#include <iostream>
using namespace std;

int main() {

	int t;
	cin >> t;
	while(t--)
	{
	    int b;
	    cin >> b;
	    
	    b = b-2;
	    b = b/2;
	    b = b*(b+1)/2;
	    cout << b << "\n";
	}
	
	return 0;
}
