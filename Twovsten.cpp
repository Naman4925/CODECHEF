#include <iostream>
using namespace std;

int main() {
	int n, k, t;
	cin>>n;
	for(int i=0; i<n; i++){
	    cin>>k;
	    if(k%5==0){
	         if(k%10==0){
	              cout<<"0"<<endl;
	         }
	         else if(k%10==5){
	         cout<<"1"<<endl;
	         }
	    }
	    else{
	         cout<<"-1"<<endl;
	    }
	}
	return 0;
}
