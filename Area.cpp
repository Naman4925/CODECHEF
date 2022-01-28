#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int l,b;
	cin>>l>>b;
	int a,p;
	a=l*b;
	p=2*(l+b);
	if(a>p){
	    cout<<"Area"<<endl;
	    cout<<a;
	}
	else if(p>a){
	    cout<<"Peri"<<endl; 
	    cout<<p;
	} 
	else{
	    cout<<"Eq"<<endl;
	    cout<<a;
	} 
	return 0;
}
