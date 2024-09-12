/*
Approach:
array a, a.length() = n
[a1,a2,a3,a4,a5,....]
a[1] + a[2] = a[2] + a[3] = a[3] + a[4] = a[4] + a[5] = ... = a[n-1] + a[n] = k

For n=5 (n is odd)
a[1] + a[2] = a[2] + a[3] = a[3] + a[4] = a[4] + a[5]
a[1] = a[3] = a[5]  ---> unique element
a[2] = a[4]  ----> unique element

For n=6 (n is even)
a[1] + a[2] = a[2] + a[3] = a[3] + a[4] = a[4] + a[5] = a[5] + a[6]
a[1] = a[3] = a[5]
a[2] = a[4] = a[6]

So we can conclude that,
1. Elements at the position with same parity should be equal.
2. We cannot have more than two unique elements
3. Frequency of unique element should not exceed n/2 and (n+1)/2
*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> arr(n);
        for (int i = 0; i < n; i++)
            cin >> arr[i];

        bool flag = true;
        unordered_map<int, int> mp;
        for (int i = 0; i < n; i++)
        {
            mp[arr[i]]++;

            if (mp.size() > 2)
            {
                flag = false;
                break;
            }
        }

        if (mp.size() == 2)
        {
            int f1 = mp.begin()->second;
            if (f1 != n/2 && f1 != (n + 1) / 2)
            {
                flag = false;
            }
        }
        if (flag)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}