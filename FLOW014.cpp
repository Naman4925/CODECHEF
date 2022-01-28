#include <iostream>
using namespace std;

int main() {
    
    int q;
    cin>>q;
    
    while(q--)
    {
        int h,te;
    	float c;
    	cin>>h>>c>>te;
    
    	if(h>50 && c<0.7 && te>5600){
    	    cout<<10<<endl;
    	}
    	else if(h>50 && c<0.7){
    	    cout<<9<<endl;
    	}
    	else if(c<0.7 && te>5600){
    	    cout<<8<<endl;
    	}
    	else if(h>50 && te>5600){
    	    cout<<7<<endl;
    	}
    	else if(h>50 || c<0.7 || te>5600){
    	    cout<<6<<endl;
    	}
    	else{
    	    cout<<5<<endl;
    	}
    }
	// your code goes here
	return 0;
}
