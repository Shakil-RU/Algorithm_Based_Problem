#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t; cin>>t;
    int s = 0, d = 0,turn = 1;
     vector<int>v;
    for(int i = 0; i<t; i++)
    {
        int a; cin>>a;
        v.push_back(a);
    }
  while(!v.empty())
  {
      if(turn == 1)
      {
          if(v[0]>v.back())
          {
              s = s + v[0];
              v.erase(v.begin());
          }
          else{
              s = s + v.back();
              v.pop_back();
          }
          turn = 2;
      }
      
      else{
           if(v[0]>v.back())
          {
              d = d + v[0];
              v.erase(v.begin());
          }
          else{
              d = d + v.back();
              v.pop_back();
          }
          turn = 1;
      }
  }
  
  cout<<s<<" "<<d<<endl;
    return 0;
}
