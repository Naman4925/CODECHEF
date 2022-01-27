#include <iostream>
using namespace std;

int main() {
    int N;
    cin>>N;
    int A[N];
    int even=0;
    for(int i=1;i<=N;i++){
        cin>>A[i];
        if(A[i]%2==0){
            even++;
        }
    }
    if(even> N-even){
        cout<<"READY FOR BATTLE"<<endl;
    }
    else{
        cout<<"NOT READY"<<endl;
    }
	// your code goes here
	return 0;
}
