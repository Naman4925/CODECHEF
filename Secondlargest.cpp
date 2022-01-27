#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int a;
		cin>>a;
		int b;
		cin>>b;
		int c;
		cin>>c;
		int arr[3]={a,b,c};
		sort(arr,arr+3);
		cout<<arr[1]<<endl;
	}
}
