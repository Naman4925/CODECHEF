#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--)
    {
        int n,c=0;
        cin>>n;
        for(int i=1;i<=n;i++)
        {
            if(i%2!=0){
                c=c+3;
                
            }
            else{
                c=c-1;
            }
        }
        cout<<c<<"\n";
    }
    
	// your code goes here
	return 0;
}
