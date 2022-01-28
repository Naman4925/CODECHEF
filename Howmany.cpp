#include <iostream>
using namespace std;

int main() {
    int n,c=0;
    cin>>n;
    while(n>0)
    {
        n=n/10;
        c++;
    }
    if(c>3)
    cout<<"More than 3 digits";
    else
    cout<<c<<endl;
	return 0;
}
