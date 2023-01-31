
#include<bits/stdc++.h>

using namespace std;
int x[4] = {-1,0,1,0};
int y[4] = {0,-1,0,1};

int main() {
    int r , c;
    cin>>r>>c;

    pair<int,int> st , end;
    bool arr[r][c];
    for(int i = 0 ; i < r ; i++){
        for(int j = 0 ; j < c ; j++){
            char ch;
            cin>>ch;
            if(ch == 's' || ch == '#') {
                arr[i][j] = false;
            }else{
                arr[i][j] = true;
            }

            if(ch == '@'){
                st.first = i;
                st.second = j;
            }

            if(ch == 'x'){
                end.first = i;
                end.second = j;
            }
        }
    }
     {
            queue< pair<int,int> > q;
            q.push(st);
            arr[st.first][st.second] = false;
            while(!q.empty()) {
                pair<int,int> v = q.front();
                q.pop();
                int row , col;
                row = v.first;
                col = v.second;
                for(int i = 0 ; i < 4 ; i++){
                    int a , b;
                    a = row + x[i];
                    b = col + y[i];

                    if(a >= 0 && a < r && b >= 0 && b < c) {

                        if(arr[a][b] == true){
                            cout<<a<<b<<endl;
                            arr[a][b] = false;
                            q.push({a,b});
                        }
                    }
                }
            }
        }

        if(arr[end.first][end.second] == false) {
            cout<<"possible";
        }else{
            cout<<"impossible";
        }
}
