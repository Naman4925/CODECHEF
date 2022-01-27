#include<iostream>
using namespace std;
int main(){
     int t;
     cin>>t;
     while(t--){
          int a,b,c,d;
          cin>>a>>b;
          if (a>=b){
               c=a%b;
               cout<<"\n"<<c;
          }
          else
          {d=a%b;
          cout<<"\n"<<d;}
     }
     return 0;
}
