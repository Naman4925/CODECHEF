#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    long int n;
    while(t--){
        cin>>n;
        double num = pow(0.143*n,n);
        if((num-floor(num))<0.5){
            cout<<floor(num)<<endl;
        }
        else{
            cout<<floor(num)+1<<endl;
        }
    }
 // your code goes here
 return 0;
}
