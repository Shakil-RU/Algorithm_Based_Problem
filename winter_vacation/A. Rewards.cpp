#include<bits/stdc++.h>
using namespace std;
int main()
{
	
	int a1,a2,a3,b1,b2,b3,n;
	cin>>a1>>a2>>a3>>b1>>b2>>b3>>n;
	int a,b,sum=0;
	a = (a1+a2+a3+4)/5;
	b = (b1+b2+b3+9)/10;
	sum = a+b;
	if(sum<=n)
	{
		cout<<"YES"<<endl;
	}
	else{
		cout<<"NO"<<endl;
	}
	
	return 0;
	
}
