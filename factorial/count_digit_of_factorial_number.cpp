#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n; cin>>n;
	double ans = 0;
	for(int i = 1; i <= n; i++) {
		ans +=log10(i);
	}
	cout << int(ans) + 1 << endl;
	return 0;
}
