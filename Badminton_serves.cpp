#include <iostream>
using namespace std;

int main() {
 // your code goes here
 int t ;
 cin >> t ; 
 while(t--){
     int a ; 
     cin >> a ;
     if(a%2==0){
         cout << (a/2)+1 << endl ;
     }
     else {
         cout << (a-1)/2 + 1 << endl ;
     }
 }
 return 0;
}
