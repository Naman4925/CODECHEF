#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    int n,c=0;
	    cin>>n;
	    
	    c=c+n/100;
	    n=n%100;
	    
	    c=c+n/50;
	    n=n%50;
	    
	    c=c+n/10;
	    n=n%10;
	    
	    c=c+n/5;
	    n=n%5;
	    
	    c=c+n/2;
	    n=n%2;
	    
	    c=c+n/1;
	    n=n%1;
	    
	    cout<<c<<endl;
	}
	return 0;
}
