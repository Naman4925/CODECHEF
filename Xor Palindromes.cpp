#include <iostream>
using namespace std;
#define T if(n%2==0){if(a==b)cout<<"YES\n";else if(a%2==0&&b%2==0)cout<<"YES\n";else cout<<"NO\n";}else cout<<"YES"<<endl;
int main() {
    int t;cin>>t;
    while(t--){
        int a=0,b=0,i,n;cin>>n;
        char s[n];cin>>s;
        for(i=0;i<n;i++){
            (s[i]=='0')?a++:b++;}T;
    }return 0;
}
