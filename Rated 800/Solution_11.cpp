#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    int posMin = 1000000;
    int negMax = -1000000;
    // constraint for Ai is -100000<=Ai<=100000
    
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == 0)
        {
            cout << 0;
            return 0;
        }
        else if (arr[i] > 0)
        {
            posMin = min(posMin, arr[i]);
        }
        else
        {
            negMax = max(negMax, arr[i]);
        }
    }
    if (posMin <= -negMax)
    {
        cout << posMin;
    }
    else
    {
        cout << -negMax;
    }

    return 0;
}