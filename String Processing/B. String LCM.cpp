#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s1, s2;
        cin >> s1 >> s2;
        string x = s1, y = s2;

        while(x.size() != y.size())
        {
            if(x.size() < y.size())
            {
                x = x + s1;
            }
            else{
                y = y + s2;
            }
        }
        if(x == y)
        {
            cout<<x<<endl;
        }
        else{
            cout<<"-1"<<endl;
        }
    }
    return 0;
}
