/*
Approach:
Consider 1-based indexing in the array
index i in [2,n-1]
if a[i-1]<a[i]>a[i+1] => swap(a[i],a[i+1])
Aim: sort the array

a1 cannot move from its position due to restriction,
So if(first element is not 1) print "No"

example:
n=6 (if 1 is at first place)
1 6 5 3 2 4 ---> 1 5 3 2 4 6
Now 1 to 5 becomes the next permutation
(1 5 3 2 4) 6 ---> 1 3 2 4 5 6
(1 3 2 4) 5 6 ---> 1 3 2 4 5 6
(1 3 2) 4 5 6 ---> 1 2 3 4 5 6
hence, sorted!
So using bubble sort we can solve this problem if and only if the first element is the smallest

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
        int arr[n];
        for (int i = 0; i < n; i++)
            cin >> arr[i];
        if (arr[0] != 1)
            cout << "No" << endl;
        else
            cout << "Yes" << endl;
    }
    return 0;
}