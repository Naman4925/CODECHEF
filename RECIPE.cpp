#include <iostream>
using namespace std;

int main() {
	int t,a,max,gcd;
	cin>>t;
	for(int i=0;i<t;i++){
	     int r=0;
	     cin>>a;
	     int b[a];
	     for(int j=0;j<a;j++){
	          cin>>b[j];
	     }
	     max=b[0];
	     for(int j=0;j<a;j++){
	          if(b[j]>max){
	               max=b[j];
	          }
	     }
	     for(int z=max;z>0;z--){
	          if(r==a){
	               gcd=z+1;
	               break;
	          }
	          else{
	               gcd=1;
	          }
	          r=0;
	          for(int j=0;j<a;j++){
	               if(b[j]%z==0){
	                    r++;
	                    continue;
	               }
	               else{
	                    break;
	               }
	          }
	          
	     }
	     for(int j=0;j<a;j++){
	          cout<<b[j]/gcd<<" ";
	     }
	     cout<<"\n";
	     
	     
	     
	}
	return 0;
}
