#include <bits/stdc++.h>
using namespace std;
#define ff first
#define ss second
#define int long long
#define endl "\n"
#define pb emplace_back
#define mp make_pair
#define pii pair<int, int>
#define vi vector<int>
#define mii map<int, int>
#define pqb priority_queue<int>
#define pqs priority_queue<int, vi, greater<int>>
#define setbits(x) __builtin_popcountll(x)
#define zrobits(x) __builtin_ctzll(x)
#define mod 1000000007
#define inf 1e18
#define ps(x, y) fixed << setprecision(y) << x
#define tc(t) \
    int t;    \
    cin >> t; \
    while (t--)
#define fast                      \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);

int32_t main()
{
    tc(t)
    {
        string str1, str2;
        cin >> str1 >> str2;

        if (str1.size() != str2.size())
        {
            cout << "No\n";
        }
        else
        {
            int flg = 0, flg1 = 0;

            for (int i = 0; i < str1.size(); i++)
            {

                if (str1[i] != str2[i])
                {
                    if (str1[i] == '?' || str2[i] == '?')
                    {
                        flg++;
                    }
                    else
                    {
                        flg1++;
                        break;
                    }
                }
            }
            // cout << flg << endl;
            // cout << flg1 << endl;
            if (flg1 >= 1)
            {
                cout << "No\n";
            }
            else
            {
                cout << "Yes\n";
            }
        }
    }
    return 0;
}
