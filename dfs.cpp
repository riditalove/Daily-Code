#include<bits/stdc++.h>

using namespace std;

vector<int>graph[10];

bool visited[10];

void dfs(int source)
{
    visited[source]=1;
    for(int i=0;i<graph[source].size();i++)
    {
        int val = graph[source][i];
        if(visited[val]!=1)
        {
            dfs(val);
        }
    }
}

void print(vector<int>graph[], int n)
{
    for(int i=0;i<n;i++)
    {
        cout<<i<<" -> ";
        for(int j=0;j<(graph[i].size());j++)
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
    for(int i=0;i<edge;i++)
    {
        cin>>u>>v;
        graph[u].push_back(v);
        graph[v].push_back(u);

    }
    print(graph,node);
    dfs(0);
    for(int i=0;i<node;i++)
    {
        if(visited[i]==1)
        {
            cout<<"VISITED"<<endl;
        }
        else{
            cout<<"NOT VISITED"<<endl;
        }
    }
}
