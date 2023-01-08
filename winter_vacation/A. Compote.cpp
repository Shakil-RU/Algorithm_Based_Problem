#include<bits/stdc++.h>
using namespace std;

	int main ()
{
    int a,b,c;

    while (cin >> a >> b >> c)
    {
        while (1)
        {
            if (a * 2 <= b && a * 4 <= c)
            {
                cout << a + 2*a + 4*a << endl;
                break;
            }
            a = a-1;
        }
    }
	return 0;
}
