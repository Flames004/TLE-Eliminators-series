/*
Approach:
We need to find the maximum gap between the checkpoints(gas stations) and in the end we will comapre the answer with 2 times the gap between the last checkpoint and x (to reach there and come back to the same point).
So our answer will the maximum of these values.
*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, x;
        cin >> n >> x;
        vector<int> arr(n);
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        int last = 0;
        int maxi = INT_MIN;
        for (int i = 0; i < n; i++)
        {
            maxi = max(maxi, arr[i] - last);
            last = arr[i];
        }
        maxi = max(maxi, 2 * (x - last)); // checking with 2 * distance between last checkpoint and x
        cout << maxi << endl;
    }
    return 0;
}