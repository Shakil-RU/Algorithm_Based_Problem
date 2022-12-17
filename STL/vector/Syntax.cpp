#include<bits/stdc++.h>
using namespace std;

int main()
{
    vector<int>v = {3,4,4,9,9,6,27,8 };
    //sort(v.begin(), v.end(), greater<int>());
    //sorting vector increasing order
    sort(v.begin(), v.end());
    
    for(auto u: v){
        cout<<u<<" ";
    }
    cout<<endl;
     //sorting vector deccreasing order
   sort(v.rbegin(), v.rend());
    
    
    for(auto u: v){
        cout<<u<<" ";
    }
    cout<<endl;
    
     //reverse vector
     reverse(v.begin(), v.end());
     for(auto u: v){
        cout<<u<<" ";
    }
    cout<<endl;
    cout<<v.back()<<endl;
    
    vector<int>::iterator it = max_element(v.begin(), v.end());
    cout<<*it<<endl;
    
     vector<int>::iterator i = min_element(v.begin(), v.end());
    cout<<*i<<endl;
    
    
    
    
    
    
    return 0;
}
