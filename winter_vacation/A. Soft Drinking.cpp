#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n,k,l,c,d,p,nl,np;
	cin>>n>>k>>l>>c>>d>>p>>nl>>np;
	int total_drinks = k*l;
	total_drinks = total_drinks/nl;
	int total_slices = c*d;
	int total_salt = p/np;
	int ans = min(min(total_drinks,total_slices), total_salt)/n;
	cout<<ans<<endl;
	return 0;
}
