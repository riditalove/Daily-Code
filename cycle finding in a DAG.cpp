#include<bits/stdc++.h>

using namespace std;

bool dfs(int val,bool visit[],bool path[],vector<int>ar[])
{
    visit[val]=true;
    path[val] =true;
    for(int j=0;j<ar[val].size();j++)
    {
        int v=ar[val][j];
        if(!visit[v])
        {
            if(dfs(v,visit,path,ar))
            {
                return true;
            }
            else
                continue;
        }
        else if(path[v]==true && visit[v]==true)
        {
            return true;
        }
    }
    path[val]=false;
    return false;
}

int main()
{
    int n,m;
    cin>>n>>m;
    vector<int>ar[n+1];
    int a,b;
    bool visited[n+1]={false};
    bool path[n+1]={false};
    for(int i=0;i<m;i++)
    {
        cin>>a>>b;
        ar[a].push_back(b);
    }
    for(int i=0;i<n;i++)
    {
        if(!visited[i])
        {
            if(dfs(i,visited,path,ar))
            {
                cout<<"CYCLE"<<endl;
                break;
            }
            else
            {
                cout<<"NOT CYLE"<<endl;
            }
        }
        else{
            continue;
        }
    }


}
