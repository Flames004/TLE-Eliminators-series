/*
Approach:
if(all elements same) cout<<"-1"

else{
/make sure c has always elements greater then b
b <- smallest element(s)
c <- remaining elements
}
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
        vector<int> v(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        map<int, int> mp;
        for (auto a : v)
        {
            mp[a]++;
        }
        if (mp.size() == 1)
        {
            cout << "-1" << endl;
        }
        else
        {
            // map is sorted by keys
            int ele = begin(mp)->first;  // key
            int fre = begin(mp)->second; // value

            // print lb,lc
            cout << fre <<" "<< n - fre << endl;

            // print b
            for (int i = 0; i < fre; i++)
            {
                cout << ele << " ";
            }
            cout << endl;

            mp.erase(ele);
            for (auto [e, f] : mp)  // it requires c++ 17.0 version
            {
                for (int i = 0; i < f; i++)
                {
                    cout << e << " ";
                }
                cout << endl;
            }
        }
    }
    return 0;
}