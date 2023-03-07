#include <bits/stdc++.h>
#define newline cout<<"\n"
#define pb push_back
#define ll long long
using namespace std;
string s, t;
int ssize, tsize;

bool generate(int i) {
  for(int k = i; k < ssize; k++) {
    string temp = s.substr(i, k-i+1);
    if(temp == t) {
      return true;
    }
    for(int j = k-1; j >= 0; j--) {
      temp += s[j];
      if(temp == t) {
        return true;
      }
    }
  }
  return false;
}

void solve() {
  cin>>s>>t;
  ssize = s.size(), tsize = t.size();
  for(int i = 0; i < ssize; i++) {
    if(s[i] == t[0]) {
      if(generate(i)) {
        cout<<"YES\n";
        return;
      }
    }
  }
  cout<<"NO\n";
}

int main() 
{
  ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	
	int t = 1;
	cin>>t;
	while(t--) {
	  solve();
	}
  return 0;
}
