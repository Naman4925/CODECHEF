#include <iostream>
using namespace std;

int main() {
    int T;
    cin>>T;
    int A, B;
    while(T--){
        cin>>A>>B;
        if(A>B){
            cout<<A<<" "<<A+B<<endl;
        }
        else{
            cout<<B<<" "<<A+B<<endl;
        }
    }
	// your code goes here
	return 0;
}
