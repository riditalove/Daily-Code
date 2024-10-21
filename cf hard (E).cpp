#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin>>n;
    vector<int>v;
    for(int i=0; i<n; i++)
    {
        int a;
        cin>>a;
        v.push_back(a);
    }
    sort(v.begin(),v.end());
    for(int j=0;j<n;j++)
    {
        cout<<v[j]<<endl;
    }
    cout<<endl;
    int ans=1;
    set<int>s;
    v[n-1]=v[n-1]+1;
    s.insert(v[n-1]);
    for(int j=n-2; j>=0; j--)
    {
        if(v[j]+1<v[j+1])
        {
            v[j]=v[j]+1;
            s.insert(v[j]);
            ans++;
        }
        else if(v[j]+1==v[j+1])
        {
            s.insert(v[j]);
            ans++;
        }
        else if((v[j]==v[j+1]) && ((v[j]-1)>0))
        {
            v[j]=v[j]-1;
            s.insert(v[j]);
            ans++;
        }
        else if(v[j]>v[j+1])
        {
            continue;
        }
    }
    for(int i=0;i<v.size();i++)
    {
        cout<<v[i]<<endl;
    }
    cout<<endl;
    cout<<s.size()<<endl;


}
