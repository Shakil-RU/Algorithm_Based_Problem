#include<bits/stdc++.h>
using namespace std;
bool sortbysec(const pair<int,int> &a,
              const pair<int,int> &b)
{
    return (a.second < b.second);
}
int main(){
      int  n ;
      cin >> n ;
      vector<pair<int , int >> v(n) ;

      for(int i = 0 ; i < n ; i += 1){
            cin >> v[i].first >> v[i].second ;
      }

      sort(v.begin() , v.end() , sortbysec) ;

      int cnt = 1 , endTime = v[0].second ;
      for(int i = 1 ; i < n ; i += 1){
            if(v[i].first >= endTime){
                  cnt += 1  ;
                  endTime = v[i].second ;
            }
      }
      cout << cnt << '\n' ;

      return 0 ;
}
