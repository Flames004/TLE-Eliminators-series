/*
Approach :
If k is present in the array then there always exist a susegment of k appearing most number of times.
So print yes if k exists in the array otherwise print no.

*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        vector<int> arr(n);
        for (int i = 0; i < n; i++)
            cin >> arr[i];

        if (find(arr.begin(), arr.end(), k) != arr.end())
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }

    return 0;
}