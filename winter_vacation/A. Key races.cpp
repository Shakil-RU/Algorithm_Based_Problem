#include<bits/stdc++.h>
using namespace std;

int main()
{
  int s,v1,v2,t1,t2;
  cin>>s>>v1>>v2>>t1>>t2;
  int f1, f2, f;
  f1 = 2*t1 + v1*s ;
  f2 = 2*t2 + v2*s ;
  
  if(f1<f2)
  {
    cout<<"First"<<endl;
  }
    
 else if(f1>f2)
  {
    cout<<"Second"<<endl;
  }
    
  else
  {
    cout<<"Friendship"<<endl;
  }
  
  
  return 0;
}
