#include <iostream>
using namespace std;

long long int matches(long long int n){
    long long int digit,sum=0;
    while(n){
        digit=n%10;
        if((digit==2 or digit==3 or digit==5)){sum+=5;}
        else if((digit==0 or digit==6 or digit==9)){sum+=6;}
        else if(digit==1){sum+=2;}
        else if(digit==4){sum+=4;}
        else if(digit==7){sum+=3;}
        else if(digit==8){sum+=7;}
        n/=10;
    }
    return sum;
}
int main() {
	// your code goes here 2,3,5->5  0,6,9->6  1->2  4->4  7->3
	int t;
	cin>>t;
	while(t--){
	    long long a,b;
	    cin>>a>>b;
	    long long int ans=a+b;
	    cout<<matches(ans)<<endl;
	}
	return 0;
}
