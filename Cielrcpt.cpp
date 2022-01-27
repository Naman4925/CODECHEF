#include <iostream>
#include<math.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--)
    {
        int p;
        cin>>p;
        int menuitems = 0;
        for(int i=11;i>=0;--i)
        {
            int currentpower = pow(2,i);
            while(p>=currentpower)
            {
                p = p-currentpower;
                menuitems++;
            }
        }
        cout<<menuitems<<endl;
    }
	return 0;
}
