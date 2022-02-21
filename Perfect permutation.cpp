#include<bits/stdc++.h>
using namespace std;

//output can be random
//solution by T.I.H
//please do not copy paste to avoid plag
//solution is uploaded in telegram 

void TIH()
{
    int n, k;cin >> n >> k;
    vector<int> vp;
    for (int i = 1; i <= n; i++)vp.push_back(i);
    if (n == 1){cout << 1 << endl;return;}
    if (k == n - 1){swap(vp[0], vp[1]);
        for (auto e : vp)
        {
            cout << e << " ";
        }
        cout << endl;return;
    }
    int sw = 0;
    k = n - k;
    while (k--){swap(vp[sw], vp[sw + 1]);sw++;}
    for (auto e : vp){cout << e << " ";}
    cout << endl;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        TIH();
    }
}
