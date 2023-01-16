#include <iostream>
#include<math.h>
using namespace std;

int main() {
	int n;
	cin>>n;
	int i = 1, x;
	int cnt = 0;
	
	do {
	   x = pow(5, i);
		cnt += n / x;
		i++;
	} while(n/x);
	cout << cnt << endl;
	return 0;
}
