
#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n, m, sx, sy, d, ans;
    cin >> n >> m >> sx >> sy >> d;
    int up = sx - d, down = sx + d;
    int left = sy - d, right = sy + d;

    if (left <= 1 && right >= m)
    {
        ans = -1;
    }
    else if (up <= 1 && down >= n)
    {
        ans = -1;
    }
    else if (up <= 1 && left <= 1)
    {
        ans = -1;
    }
    else if (down >= n && right >= m)
    {
        ans = -1;
    }
    else
    {
        ans = m + n - 2;
    }

    cout << ans << endl;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
        solve();
    return 0;
}
