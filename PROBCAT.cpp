#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int n;
	cin>>n;
	for(int i=0;i<n;i++){
	    int x;
	    cin>>x;
	    if(x>=0 && x<100){
	        cout<<"Easy"<<endl;
	    }
	    else if(x>=100 && x<200){
	        cout<<"Medium"<<endl;
	    }
	    else if(x>=200 && x<=300){
	        cout<<"Hard"<<endl;
	    }
	}
	return 0;
}
