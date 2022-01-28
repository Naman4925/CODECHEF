#include <iostream>
using namespace std;

int main() {
	int T;
	cin>>T;
	while(T--){
	    int a,i,j;
	    cin>>a;
	    int arr[a][a];
	    for(i=0;i<a;i++){
	        for(j=0;j<=i;j++){
	            cin>>arr[i][j];
	        }
	    }
	    for(i=a-1;i>0;i--){
	        for(j=0;j<=i-1;j++){
	            if(arr[i][j]>=arr[i][j+1]){
	                arr[i-1][j]+=arr[i][j];
	            }
	            else{
	                arr[i-1][j]+=arr[i][j+1];
	            }
	        }
	    }
	    cout<<arr[0][0]<<endl;
	}
	return 0;
}
