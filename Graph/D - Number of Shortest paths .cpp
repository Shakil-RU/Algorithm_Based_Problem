#include<bits/stdc++.h>
using namespace std;
vector<int>vt[200005];
#define MOD   1000000007
int vis[200005], dis[200005], paths[200005];

void bfs(int x)
{
    queue<int>q;
    q.push(x);
    vis[x]=1;
    dis[x]=0;
    paths[x]=1;
 
    while(!q.empty())
    {
        int u=q.front();
 
        q.pop();
        for(int i=0;i<vt[u].size();i++)
        {
            int v=vt[u][i];
            if(!vis[v])
            {
                vis[v]=1;
                q.push(v);
            }
            // check if there is a better path.
           if (dis[v] > dis[u] + 1)
            {
                dis[v] = dis[u] + 1;
                paths[v] = paths[u]%MOD;
            }
 
            // additional shortest paths found
            else if (dis[v] == dis[u] + 1)
                paths[v] = (paths[v] + paths[u])%MOD;
        }
    }
}

int main()
{
    int n, a, b, x,m;
    cin>>n>>m; /// how many connection
    for(int i=1; i<=m; i++)
    {
        cin>>a>>b;
        vt[a].push_back(b);
        vt[b].push_back(a);
    }
     for(int i=1;i<=n;i++)
        dis[i]=INT_MAX;
    bfs(1);
    /*for(int i=1;i<=n;i++)
    {
    cout<<"1 theke "<<i<<" a jawer jonno shortest paths : " <<paths[i]<<endl;
    }*/
    cout<<paths[n]<<endl;
    
    return 0;
}
