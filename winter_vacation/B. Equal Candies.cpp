#include<bits/stdc++.h>
using namespace std;
 
 int main()
 {
   int t; cin>>t;
   for(int k = 0; k<t; k++)
   {
     
   int n,a, min ,sum = 0; cin>>n;
   vector<int>v;
   
   for(int i = 0; i<n; i++)
   {
        cin>>a;
        v.push_back(a);
   }
   
   sort(v.begin(), v.end());
   min = *v.begin();
   for(int i = 0; i<n; i++)
   {
     sum = sum + (v[i] - min );
   }
   cout << sum << endl;
   }
   return 0;
 }
