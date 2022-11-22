#include <bits/stdc++.h>
#define IOS ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
using namespace std;
int n;
void valley()
{
    cin >> n;
    vector<int> v(n + 5);
    for (int i = 1; i <= n; i++)
        cin >> v[i];
    bool flag = 0;
    for (int j = 2; j <= n; j++)
    {
        if (v[j] > v[j - 1])
            flag = 1;
        if (flag)
        {
            if (v[j] < v[j - 1])
            {
                cout << "NO" << endl;
                return;
            }
        }
    }
    cout << "YES" << endl;
}
int main()
{
    IOS;
    int t;
    cin >> t;
    while (t--)
    {
        valley();
    }
}
