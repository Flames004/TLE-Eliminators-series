/*
Approach :
The main observation here is the edge case when k=1.
If k=1, then array must be sorted otherwise it is not possible to sort it in any way.
Therefore, if k=1 and the array is not sorted then print "NO" otherwise print "YES" in all cases, as it is always possible to sort the array.
Basically we can sort it using any number of reversals if k>1.
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
        {
            cin >> arr[i];
        }

        if (k == 1 && !is_sorted(arr.begin(), arr.end()))
            cout << "NO" << endl;
        else
            cout << "YES" << endl;
    }
}