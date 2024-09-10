/*
Approach :
1st - place water
2nd - replace water from one cell to another
w - water
w.w --> www
. --> empty cell
# --> blocked cell

There can be many cases like
...#..##....

but if we can make condition like this w.w, then we will have unlimited supply of water
explaination:
w.w --> www
now we can remove the middle water and make it w.w again but due to property it will automatically become www
Therefore, minimum effort will be making a condition like w.w
but if it is not met, then we need to fill every empty cell individually
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
        string s;
        cin >> s;
        int e = 0;
        bool ans = true;
        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] == '.')
                e++;
            if (i > 0 && i < n - 1)
            {
                if (s[i - 1] == '.' && s[i] == '.' && s[i + 1] == '.')
                {
                    cout << 2 << endl;
                    ans = false;
                    break;
                }
            }
        }
        if (ans)
            cout << e << endl;
    }
    return 0;
}