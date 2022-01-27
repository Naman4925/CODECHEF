#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int T;
    cin >> T;
    while (T--){
        int N,b,r=0;
        cin >> N;
        int temp=N;
        while (N>0)
        {
            r=r*10+N%10;
            /* code */
            N=N/10;
        }

        if(temp==r){
            cout<<"wins"<<endl;
        }
        else{
            cout<<"loses"<<endl;
            
        }
        
    }
return 0;
}
