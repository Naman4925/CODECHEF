#include <iostream>
using namespace std;
//Kindly change Variables :)
int main() {
    int t;cin>>t;
    while(t--){
        int n,i,x,I=0;cin>>n;int a[n];
        for(i=0;i<n;i++){
            cin>>a[i];
            // Kindly Change Variables :)
            x=1+I+i;(x==a[i]?I++:0);
        }
        cout<<I<<endl;
    }
 return 0;
}
