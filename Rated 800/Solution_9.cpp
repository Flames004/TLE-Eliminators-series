/*
Approach:
If we observe carefully the test cases, we found that the overall efficiency of all teams against each other will be zero.
Therefore just find the number required to make the total sum of all efficiencies zero.
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
        vector<int> arr(n - 1);
        for (int i = 0; i < n - 1; i++)
            cin >> arr[i];
        int sum = 0;
        for (int i = 0; i < n - 1; i++)
            sum += arr[i];
        int ans = -sum;
        cout << ans << endl;
    }
    return 0;
}