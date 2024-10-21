
#include<bits/stdc++.h>

using namespace std;
#define MX 100


vector<int>graph[MX];



bool visited[MX];

int dis[MX];

void bfs(int source,vector<int>graph[])
{
    queue<int>q;
    visited[source]=1;
    dis[source]=0;
    q.push(source);
    while(!q.empty())
    {
        int cur = q.front();
        q.pop();
        for(int j=0; j<graph[cur].size(); j++)
        {
            int next = graph[cur][j];
            if(visited[next]==0)
            {
                visited[next]=1;
               dis[next]= dis[cur]+1;
                q.push(next);
            }


        }
    }


}

void print(vector<int>graph[], int n)
{
    for(int i=0; i<n; i++)
    {
        cout<<i<<" -> ";
        for(int j=0; j<(graph[i].size()); j++)
        {
            cout<<graph[i][j]<< " ";
        }
        cout<<endl;
    }
}

int main()
{
    int node,edge,u,v;
    cin>>node>>edge;
    for(int i=0; i<edge; i++)
    {
        cin>>u>>v;
        graph[u].push_back(v);
        graph[v].push_back(u);

    }
    print(graph,node);
    bfs(1,graph);
    for(int i=0; i<node; i++)
    {
        cout<<dis[i]<<endl;
    }
}
