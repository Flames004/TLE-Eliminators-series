/*
Approach :
For vanya to win, she only needs to +1 or -1 if n is not divisible by 3
But if 3 is already divisible by 3 then vanya cannot make it again divisible by 3 as vova will reverse what vanya will do evertime which will make it impossible for vanya to win.
Therefore, if n is not divisible by 3 then vanya wins and vova wins otherwise.
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
        if (n % 3 == 0)
            cout << "Second" << endl;
        else
            cout << "First" << endl;
    }
    return 0;
}