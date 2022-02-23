#include<bits/stdc++.h>
#define ll   long long int
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;

        vector<int> arr(n + 2, 1);

        for (int i = 1; i <= n; i++)
        {
            cin >> arr[i];
        }

        int i = 1, curr = 1;

        while (i <= n)
        {
            if (curr)
            {
                arr[i] = arr[i + 1] * 2;
                i += 2;
            }
            else
            {
                arr[i] = arr[i - 1] * 2;
                i++;
            }

            curr = 1 - curr;
        }

        for (int i = 1; i <= n; i++)
        {
            cout << arr[i] << " ";
        }

        cout<<endl;
    }
}
