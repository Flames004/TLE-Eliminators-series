/*
Approach :
Notice the constraint given as 1<=(n.m)<=25
which means even if length of x is 1, the max length of s cannot exceed 25.
So we look at the pattern here,
x = a (1)
s = aaaaaaaaaaaaaaaaaaaaaaaaa (25)

let count = 0
1 -> aa (2)
2 -> aaaa (4)
3 -> aaaaaaaa (8)
4 -> aaaaaaaaaaaaaaaa (16)
5 -> aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa (32) [32 > 25]
So after 5th operation s will be substring of x in any case possible

Therefore we do the concatenation for 5 times and check if it is substring or not.

*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, m;
        cin >> n >> m;
        string x, s;
        cin >> x;
        cin >> s;
        int count = 0;
        int num = 6;
        bool flag = false;
        while (num--)
        {
            if (x.find(s) != string::npos)
            {
                flag = true;
                break;
            }
            else
            {
                x = x + x;
                count++;
            }
        }
        if (flag)
            cout << count << endl;
        else
            cout << -1 << endl;
    }
    return 0;
}