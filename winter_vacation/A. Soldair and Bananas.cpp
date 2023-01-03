#include <iostream>
using namespace std;

int main() {
int k,n,w;
cin>>k>>n>>w;
int ans = k;
for(int i = 2; i<=w; i++)
{
	ans = ans + k*i;
}
if(ans<n)
{
	cout<<"0"<<endl;
}
else{
	cout<<ans-n<<endl;
}

	return 0;
}
