#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int n,x,y,z,a,b,c;
	cin>>n;
	for(int i=0;i<n;i++){
	    cin>>x>>y>>z;
	
	a=x*y;
	b=x*z;
	c=b-a;
	cout<<c<<endl;
	}
	return 0;
}
