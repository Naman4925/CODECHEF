#include "bits/stdc++.h"
using namespace std;

bool isprime(int num ){

    if(num<2) return false ;

    for(int i=2 ; i < num ; i++ ){
        if(num%i==0) return false ;
    }

    return true ;
}

void sol(){
    
    int n1 , n2 , sum , prime ;
    cin>>n1>>n2 ;
    sum=n1+n2 ;

    for(int i=sum+1 ;  ; i++){
        if(isprime(i )){
            prime = i ;
            break ;
        }
    }

    cout<<prime-sum<<endl;

}

int main(void){

    int test ;
    cin>>test ;
    
    while(test--){
        sol() ;
    }

}
